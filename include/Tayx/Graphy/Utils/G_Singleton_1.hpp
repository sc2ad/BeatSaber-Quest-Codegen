// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Tayx.Graphy.Utils
namespace Tayx::Graphy::Utils {
  // Forward declaring type: G_Singleton`1<T>
  template<typename T>
  class G_Singleton_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Tayx::Graphy::Utils::G_Singleton_1, "Tayx.Graphy.Utils", "G_Singleton`1");
// Type namespace: Tayx.Graphy.Utils
namespace Tayx::Graphy::Utils {
  // WARNING Size may be invalid!
  // Autogenerated type: Tayx.Graphy.Utils.G_Singleton`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class G_Singleton_1 : public ::UnityEngine::MonoBehaviour {
    public:
    // Autogenerated static field getter
    // Get static field: static private T _instance
    static T _get__instance() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Tayx::Graphy::Utils::G_Singleton_1::_get__instance");
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<T>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<G_Singleton_1<T>*>::get(), "_instance"));
    }
    // Autogenerated static field setter
    // Set static field: static private T _instance
    static void _set__instance(T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Tayx::Graphy::Utils::G_Singleton_1::_set__instance");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<G_Singleton_1<T>*>::get(), "_instance", value));
    }
    // Autogenerated static field getter
    // Get static field: static private System.Object _lock
    static ::Il2CppObject* _get__lock() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Tayx::Graphy::Utils::G_Singleton_1::_get__lock");
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Il2CppObject*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<G_Singleton_1<T>*>::get(), "_lock"));
    }
    // Autogenerated static field setter
    // Set static field: static private System.Object _lock
    static void _set__lock(::Il2CppObject* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Tayx::Graphy::Utils::G_Singleton_1::_set__lock");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<G_Singleton_1<T>*>::get(), "_lock", value));
    }
    // static public T get_Instance()
    // Offset: 0xFFFFFFFFFFFFFFFF
    static T get_Instance() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Tayx::Graphy::Utils::G_Singleton_1::get_Instance");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<G_Singleton_1<T>*>::get(), "get_Instance", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static G_Singleton_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Tayx::Graphy::Utils::G_Singleton_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<G_Singleton_1<T>*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    static void _cctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Tayx::Graphy::Utils::G_Singleton_1::.cctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<G_Singleton_1<T>*>::get(), ".cctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
    // private System.Void Awake()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Awake() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Tayx::Graphy::Utils::G_Singleton_1::Awake");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Awake", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // private System.Void OnDestroy()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnDestroy() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Tayx::Graphy::Utils::G_Singleton_1::OnDestroy");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "OnDestroy", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
  }; // Tayx.Graphy.Utils.G_Singleton`1
  // Could not write size check! Type: Tayx.Graphy.Utils.G_Singleton`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
