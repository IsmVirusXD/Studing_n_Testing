import 'package:apicontroller/users_services.dart';
import 'package:flutter/material.dart';

class DetailsPage extends StatelessWidget {
  final User user;
  const DetailsPage({super.key, required this.user});

  @override
  Widget build(BuildContext context) {
    return Scaffold(
        backgroundColor: Colors.amber.shade200,
        appBar: AppBar(
          title: Text('${user.name.first} ${user.name.last}'),
          backgroundColor: Colors.amber.shade800,
        ),
        body: Column(
          children: [
            const SizedBox(
              width: double.infinity,
              height: 30,
            ),
            SizedBox(
                width: 150,
                height: 150,
                child: Image.network(fit: BoxFit.contain, user.picture)),
            const SizedBox(
              width: double.infinity,
              height: 30,
            ),
            Text(user.email),
            const SizedBox(
              width: double.infinity,
              height: 30,
            ),
          ],
        ));
  }

  function(context) {
    return;
  }
}
