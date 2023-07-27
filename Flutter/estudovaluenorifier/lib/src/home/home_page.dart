import 'package:flutter/material.dart';
import './home_controller.dart';

class HomePage extends StatefulWidget {
  const HomePage({super.key});

  @override
  State<HomePage> createState() => _HomePageState();
}

class _HomePageState extends State<HomePage> {
  final counter = Counter();

  @override
  void initState() {
    super.initState();
    counter.addListener(() {
      setState(() {});
    });
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: const Text('Home Page'),
      ),
      body: Center(
          child: Column(
        mainAxisAlignment: MainAxisAlignment.center,
        children: <Widget>[
          const Text(
            'You have pushed the button this many times:',
          ),
          // AnimatedBuilder(animation: counter, builder:(context, child) {
          //   return Text( '${counter.value}',
          //   style: Theme.of(context).textTheme.headlineMedium,);
          // })
          ValueListenableBuilder(
            valueListenable: counter,
            builder: ((context, value, child) {
              return Text(
                '${counter.value}',
                style: Theme.of(context).textTheme.headlineMedium,
              );
            }),
          )
        ],
      )),
      floatingActionButton: FloatingActionButton(
        onPressed: counter.increment(),
        tooltip: 'Increment',
        child: const Icon(Icons.add),
      ),
    );
  }
}
