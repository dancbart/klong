{
float xbeg=0.;
float xend=10.;
cout << "Beg =  "<<xbeg<<" End = "<< xend<<endl;
TF1 f1("f1","sin(x)",0.,xend);
f1.Draw();
TF1 f2("f2","0.25*cos(x)",0.,xend);
f2.Draw("same");
}

