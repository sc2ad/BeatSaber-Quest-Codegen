
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"

#include "UnityEngine/Color.hpp"
#include "UnityEngine/Vector3.hpp"
#include "UnityEngine/GameObject.hpp"
#include "UnityEngine/Transform.hpp"

// #include "UnityEngine/Object.hpp"

// #include "GlobalNamespace/GlobalNamespace.hpp"


extern "C" void setup() {
  UnityEngine::GameObject go = UnityEngine::GameObject("SomeObject");

  go.transform.position = UnityEngine::Vector3(1, 0, 0);

  go.transform.position
}