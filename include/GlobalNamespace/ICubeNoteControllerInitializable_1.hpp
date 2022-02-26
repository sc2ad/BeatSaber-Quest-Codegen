// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ICubeNoteControllerInitializable`1<T>
  template<typename T>
  class ICubeNoteControllerInitializable_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::ICubeNoteControllerInitializable_1, "", "ICubeNoteControllerInitializable`1");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: ICubeNoteControllerInitializable`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class ICubeNoteControllerInitializable_1 {
    public:
    // public System.Void add_cubeNoteControllerDidInitEvent(System.Action`1<T> value)
    // Offset: 0xFFFFFFFF
    void add_cubeNoteControllerDidInitEvent(::System::Action_1<T>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ICubeNoteControllerInitializable_1::add_cubeNoteControllerDidInitEvent");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "add_cubeNoteControllerDidInitEvent", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // public System.Void remove_cubeNoteControllerDidInitEvent(System.Action`1<T> value)
    // Offset: 0xFFFFFFFF
    void remove_cubeNoteControllerDidInitEvent(::System::Action_1<T>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ICubeNoteControllerInitializable_1::remove_cubeNoteControllerDidInitEvent");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "remove_cubeNoteControllerDidInitEvent", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
  }; // ICubeNoteControllerInitializable`1
  // Could not write size check! Type: ICubeNoteControllerInitializable`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
