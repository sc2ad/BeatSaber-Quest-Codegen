// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Threading
namespace System::Threading {
  // Forward declaring type: AsyncLocalValueChangedArgs`1<T>
  template<typename T>
  struct AsyncLocalValueChangedArgs_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Threading::AsyncLocalValueChangedArgs_1, "System.Threading", "AsyncLocalValueChangedArgs`1");
// Type namespace: System.Threading
namespace System::Threading {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Threading.AsyncLocalValueChangedArgs`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  struct AsyncLocalValueChangedArgs_1/*, public ::System::ValueType*/ {
    public:
    public:
    // [CompilerGeneratedAttribute] Offset: 0x105D524
    // private T <PreviousValue>k__BackingField
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T PreviousValue;
    // [CompilerGeneratedAttribute] Offset: 0x105D534
    // private T <CurrentValue>k__BackingField
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T CurrentValue;
    // [CompilerGeneratedAttribute] Offset: 0x105D544
    // private System.Boolean <ThreadContextChanged>k__BackingField
    // Size: 0x1
    // Offset: 0x0
    bool ThreadContextChanged;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating value type constructor for type: AsyncLocalValueChangedArgs_1
    constexpr AsyncLocalValueChangedArgs_1(T PreviousValue_ = {}, T CurrentValue_ = {}, bool ThreadContextChanged_ = {}) noexcept : PreviousValue{PreviousValue_}, CurrentValue{CurrentValue_}, ThreadContextChanged{ThreadContextChanged_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: private T <PreviousValue>k__BackingField
    [[deprecated("Use field access instead!")]] T& dyn_$PreviousValue$k__BackingField() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::AsyncLocalValueChangedArgs_1::dyn_$PreviousValue$k__BackingField");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<PreviousValue>k__BackingField"))->offset;
      return *reinterpret_cast<T*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private T <CurrentValue>k__BackingField
    [[deprecated("Use field access instead!")]] T& dyn_$CurrentValue$k__BackingField() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::AsyncLocalValueChangedArgs_1::dyn_$CurrentValue$k__BackingField");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<CurrentValue>k__BackingField"))->offset;
      return *reinterpret_cast<T*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Boolean <ThreadContextChanged>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$ThreadContextChanged$k__BackingField() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::AsyncLocalValueChangedArgs_1::dyn_$ThreadContextChanged$k__BackingField");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<ThreadContextChanged>k__BackingField"))->offset;
      return *reinterpret_cast<bool*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // private System.Void set_PreviousValue(T value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_PreviousValue(T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::AsyncLocalValueChangedArgs_1::set_PreviousValue");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "set_PreviousValue", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // public T get_CurrentValue()
    // Offset: 0xFFFFFFFFFFFFFFFF
    T get_CurrentValue() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::AsyncLocalValueChangedArgs_1::get_CurrentValue");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_CurrentValue", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method);
    }
    // private System.Void set_CurrentValue(T value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_CurrentValue(T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::AsyncLocalValueChangedArgs_1::set_CurrentValue");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "set_CurrentValue", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // private System.Void set_ThreadContextChanged(System.Boolean value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_ThreadContextChanged(bool value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::AsyncLocalValueChangedArgs_1::set_ThreadContextChanged");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "set_ThreadContextChanged", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // System.Void .ctor(T previousValue, T currentValue, System.Boolean contextChanged)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // ABORTED: conflicts with another method.  AsyncLocalValueChangedArgs_1(T previousValue, T currentValue, bool contextChanged)
  }; // System.Threading.AsyncLocalValueChangedArgs`1
  // Could not write size check! Type: System.Threading.AsyncLocalValueChangedArgs`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
