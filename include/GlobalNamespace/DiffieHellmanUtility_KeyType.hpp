// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: DiffieHellmanUtility
#include "GlobalNamespace/DiffieHellmanUtility.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: DiffieHellmanUtility/KeyType
  struct DiffieHellmanUtility::KeyType : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: KeyType
    constexpr KeyType(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public DiffieHellmanUtility/KeyType DiffieHellman
    static constexpr const int DiffieHellman = 0;
    // Get static field: static public DiffieHellmanUtility/KeyType DiffieHellman
    static GlobalNamespace::DiffieHellmanUtility::KeyType _get_DiffieHellman();
    // Set static field: static public DiffieHellmanUtility/KeyType DiffieHellman
    static void _set_DiffieHellman(GlobalNamespace::DiffieHellmanUtility::KeyType value);
    // static field const value: static public DiffieHellmanUtility/KeyType ElipticalCurve
    static constexpr const int ElipticalCurve = 1;
    // Get static field: static public DiffieHellmanUtility/KeyType ElipticalCurve
    static GlobalNamespace::DiffieHellmanUtility::KeyType _get_ElipticalCurve();
    // Set static field: static public DiffieHellmanUtility/KeyType ElipticalCurve
    static void _set_ElipticalCurve(GlobalNamespace::DiffieHellmanUtility::KeyType value);
  }; // DiffieHellmanUtility/KeyType
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DiffieHellmanUtility::KeyType, "", "DiffieHellmanUtility/KeyType");
#pragma pack(pop)