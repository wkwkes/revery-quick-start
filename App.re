open Revery;
open Revery.Core;
open Revery.UI;

/* The 'main' function for our app */
let init = app => {
  /* Create a window! */
  let win = App.createWindow(app, "test");

  /* Set up some styles */
  let textHeaderStyle =
    Style.make(
      ~backgroundColor=Colors.black,
      ~color=Colors.white,
      ~fontFamily="Lato-Regular.ttf",
      ~fontSize=24,
      (),
    );

  /* This is where we render the UI - if you've used React or ReasonReact, it should look familiar */
  let render = () =>
    <view
      style={Style.make(
        ~position=LayoutTypes.Absolute,
        ~bottom=10,
        ~top=10,
        ~left=10,
        ~right=10,
        ~backgroundColor=Colors.black,
        (),
      )}>
      <text style=textHeaderStyle> "Hello World!" </text>
    </view>;
  /* Start the UI */
  UI.start(win, render);
};

/* Let's get this party started! */
App.start(init);