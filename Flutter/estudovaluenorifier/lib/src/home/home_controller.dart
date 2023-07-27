import 'package:flutter/material.dart';

// class HomeController extends ChangeNotifier {
//   var counter$ = ValueNotifier(0);
//   var loading$ = ValueNotifier(true);

//   int get counter => counter$.value;

//   void inccrement() => counter$.value++;
// }


class Counter extends ValueNotifier<int> {
  Counter() : super(0);


  increment() => value++;
  decrement() => value--;
}