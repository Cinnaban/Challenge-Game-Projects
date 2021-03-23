package main

import (
  "fmt"
  "math/rand"
  "time"
)

func main() {
    rand.Seed(time.Now().UnixNano())
    isHeistOn := true
    eludedGuards := rand.Intn(100)

    if eludedGuards >= 50 {
      isHeistOn = true
      fmt.Println("Looks like you've managed to make it past the guards. Good job, but remember, this is the first step.")
    } else {
      isHeistOn = false
      fmt.Println("Plan a better disguise next time?")
    }

    openedVault := rand.Intn(100)
    if openedVault >= 70 && isHeistOn == true {
      isHeistOn = true
      fmt.Println("You've opened the vault! Grab and Go! second step")
    } else {
      isHeistOn = false
      fmt.Println("You've failed to open the vault.")
    } 

    leftSafely := rand.Intn(5)
    if isHeistOn {
      switch leftSafely {
        case 0:
        isHeistOn = false
        fmt.Println("Turns out vault doors don't open from the inside...")
        case 1:
        isHeistOn = true
        fmt.Println("You've managed to escape through the ceiling!")
        case 2:
        isHeistOn = false
        fmt.Println("You've tripped the silent alarms, guards were waiting for you outside.")
        case 3:
        isHeistOn = true
        fmt.Println("You've escaped through the floor!")
        default:
        fmt.Println("Start the getaway car!")
      }
    }
    if isHeistOn == true {
      amtStolen := 10000 + rand.Intn(1000000)
      fmt.Println("You've managed to steal: ", amtStolen, "!")
    }
    fmt.Println("isHeistOn is currently: ", isHeistOn)
}
