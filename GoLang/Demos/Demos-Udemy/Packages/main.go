package main

import (
	"media/rts/SHARED/GoLANG/Lectures/Packages/helpers"
	"log"
)

func main() {
	var myVar helpers.SomeType
	myVar.TypeName = "Some name"

	log.Println(myVar.TypeName)
}
