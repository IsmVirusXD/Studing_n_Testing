import 'package:apicontroller/users_services.dart';
import 'package:flutter/material.dart';
import './page_deatils.dart';

void main() {
  runApp(const MyApp());
}

class MyApp extends StatelessWidget {
  const MyApp({super.key});

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'HTTPS Request APP',
      debugShowCheckedModeBanner: false,
      theme: ThemeData(
        primaryColor: Colors.deepPurple.shade200,
        secondaryHeaderColor: Colors.deepPurpleAccent.shade700,
      ),
      home: const HomePage(),
    );
  }
}

class HomePage extends StatefulWidget {
  const HomePage({Key? key}) : super(key: key);

  @override
  State<HomePage> createState() => _HomePageState();
}

class _HomePageState extends State<HomePage> {
  late Future<List<User>> futureUsers;

  @override
  void initState() {
    super.initState();
    futureUsers = UserService().getUser();
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
        backgroundColor: Theme.of(context).primaryColor,
        appBar: AppBar(
            backgroundColor: Theme.of(context).secondaryHeaderColor,
            title: const Text(
              "HTTPS Request APP",
            )),
        body: RefreshIndicator(
          onRefresh: () async {
            var users = await UserService().getUser();
            setState(() {
              futureUsers = Future.value(users);
            });
          },
          child: Center(
            child: FutureBuilder<List<User>>(
              future: futureUsers,
              builder: (context, AsyncSnapshot snapshot) {
                if (snapshot.hasData) {
                  return ListView.separated(
                      itemBuilder: (context, index) {
                        User user = snapshot.data?[index];
                        return ListTile(
                          title: Text('${user.name.first} ${user.name.last}'),
                          leading: Text('${index + 1}'),
                          subtitle: Text(user.email),
                          trailing: const Icon(Icons.chevron_right_outlined),
                          onTap: (() => {click(context, user)}),
                        );
                      },
                      separatorBuilder: ((context, index) {
                        return const Divider(
                          height: 5,
                          color: Colors.black45,
                        );
                      }),
                      itemCount: snapshot.data!.length);
                } else if (snapshot.hasError) {
                  return Text('ERRO: ${snapshot.error}');
                }
                return const CircularProgressIndicator();
              },
            ),
          ),
        ));
  }

  click(context, user) {
    Navigator.of(context).push(MaterialPageRoute(
        builder: (context) => DetailsPage(
              user: user,
            )));
  }
}

//  