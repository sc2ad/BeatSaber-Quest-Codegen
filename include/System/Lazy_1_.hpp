// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Threading.LazyThreadSafetyMode
#include "System/Threading/LazyThreadSafetyMode_.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: Lazy`1<T>
  template<typename T>
  class Lazy_1_;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Lazy_1_, "System", "Lazy`1");
// Type namespace: System
namespace System {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Lazy`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [DebuggerDisplayAttribute] Offset: 1109488
  // [ComVisibleAttribute] Offset: 1109488
  template<typename T>
  class Lazy_1_ : public ::Il2CppObject {
    public:
    public:
    // private T value
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T value;
    // private System.Func`1<T> factory
    // Size: 0x8
    // Offset: 0x0
    ::System::Func_1<T>* factory;
    // Field size check
    static_assert(sizeof(::System::Func_1<T>*) == 0x8);
    // private System.Object monitor
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppObject* monitor;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Exception exception
    // Size: 0x8
    // Offset: 0x0
    ::System::Exception* exception;
    // Field size check
    static_assert(sizeof(::System::Exception*) == 0x8);
    // private System.Threading.LazyThreadSafetyMode mode
    // Size: 0x4
    // Offset: 0x0
    ::System::Threading::LazyThreadSafetyMode_ mode;
    // Field size check
    static_assert(sizeof(::System::Threading::LazyThreadSafetyMode_) == 0x4);
    // private System.Boolean inited
    // Size: 0x1
    // Offset: 0x0
    bool inited;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Autogenerated instance field getter
    // Get instance field: private T value
    [[deprecated("Use field access instead!")]] T& dyn_value() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Lazy_1_::dyn_value");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "value"))->offset;
      return *reinterpret_cast<T*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Func`1<T> factory
    [[deprecated("Use field access instead!")]] ::System::Func_1<T>*& dyn_factory() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Lazy_1_::dyn_factory");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "factory"))->offset;
      return *reinterpret_cast<::System::Func_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Object monitor
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_monitor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Lazy_1_::dyn_monitor");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "monitor"))->offset;
      return *reinterpret_cast<::Il2CppObject**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Exception exception
    [[deprecated("Use field access instead!")]] ::System::Exception*& dyn_exception() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Lazy_1_::dyn_exception");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "exception"))->offset;
      return *reinterpret_cast<::System::Exception**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Threading.LazyThreadSafetyMode mode
    [[deprecated("Use field access instead!")]] ::System::Threading::LazyThreadSafetyMode_& dyn_mode() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Lazy_1_::dyn_mode");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "mode"))->offset;
      return *reinterpret_cast<::System::Threading::LazyThreadSafetyMode_*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Boolean inited
    [[deprecated("Use field access instead!")]] bool& dyn_inited() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Lazy_1_::dyn_inited");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "inited"))->offset;
      return *reinterpret_cast<bool*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public T get_Value()
    // Offset: 0xFFFFFFFFFFFFFFFF
    T get_Value() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Lazy_1_::get_Value");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Value", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Lazy_1_<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Lazy_1_::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Lazy_1_<T>*, creationType>()));
    }
    // public System.Void .ctor(System.Func`1<T> valueFactory)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Lazy_1_<T>* New_ctor(::System::Func_1<T>* valueFactory) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Lazy_1_::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Lazy_1_<T>*, creationType>(valueFactory)));
    }
    // public System.Void .ctor(System.Threading.LazyThreadSafetyMode mode)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Lazy_1_<T>* New_ctor(::System::Threading::LazyThreadSafetyMode_ mode) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Lazy_1_::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Lazy_1_<T>*, creationType>(mode)));
    }
    // public System.Void .ctor(System.Func`1<T> valueFactory, System.Threading.LazyThreadSafetyMode mode)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Lazy_1_<T>* New_ctor(::System::Func_1<T>* valueFactory, ::System::Threading::LazyThreadSafetyMode_ mode) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Lazy_1_::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Lazy_1_<T>*, creationType>(valueFactory, mode)));
    }
    // private T InitValue()
    // Offset: 0xFFFFFFFFFFFFFFFF
    T InitValue() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Lazy_1_::InitValue");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "InitValue", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method);
    }
    // public override System.String ToString()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Lazy_1_::ToString");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ToString", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::StringW, false>(this, ___internal__method);
    }
  }; // System.Lazy`1
  // Could not write size check! Type: System.Lazy`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
