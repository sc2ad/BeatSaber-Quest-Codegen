// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: IntervalTree
namespace IntervalTree {
  // Forward declaring type: RangeValuePair`2<TKey, TValue>
  template<typename TKey, typename TValue>
  struct RangeValuePair_2;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::IntervalTree::RangeValuePair_2, "IntervalTree", "RangeValuePair`2");
// Type namespace: IntervalTree
namespace IntervalTree {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: IntervalTree.RangeValuePair`2
  // [TokenAttribute] Offset: FFFFFFFF
  // [IsReadOnlyAttribute] Offset: FFFFFFFF
  template<typename TKey, typename TValue>
  struct RangeValuePair_2/*, public ::System::ValueType, public ::System::IEquatable_1<::IntervalTree::RangeValuePair_2<TKey, TValue>>*/ {
    public:
    public:
    // private readonly TKey <From>k__BackingField
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    TKey From;
    // private readonly TKey <To>k__BackingField
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    TKey To;
    // private readonly TValue <Value>k__BackingField
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    TValue Value;
    public:
    // Creating value type constructor for type: RangeValuePair_2
    constexpr RangeValuePair_2(TKey From_ = {}, TKey To_ = {}, TValue Value_ = {}) noexcept : From{From_}, To{To_}, Value{Value_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::IntervalTree::RangeValuePair_2<TKey, TValue>>
    operator ::System::IEquatable_1<::IntervalTree::RangeValuePair_2<TKey, TValue>>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::IntervalTree::RangeValuePair_2<TKey, TValue>>*>(this);
    }
    // Creating interface conversion operator: i_RangeValuePair_2_TKey_TValue
    inline ::System::IEquatable_1<::IntervalTree::RangeValuePair_2<TKey, TValue>>* i_RangeValuePair_2_TKey_TValue() noexcept {
      return reinterpret_cast<::System::IEquatable_1<::IntervalTree::RangeValuePair_2<TKey, TValue>>*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly TKey <From>k__BackingField
    [[deprecated("Use field access instead!")]] TKey& dyn_$From$k__BackingField() {
      static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::RangeValuePair_2::dyn_$From$k__BackingField");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<From>k__BackingField"))->offset;
      return *reinterpret_cast<TKey*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly TKey <To>k__BackingField
    [[deprecated("Use field access instead!")]] TKey& dyn_$To$k__BackingField() {
      static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::RangeValuePair_2::dyn_$To$k__BackingField");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<To>k__BackingField"))->offset;
      return *reinterpret_cast<TKey*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly TValue <Value>k__BackingField
    [[deprecated("Use field access instead!")]] TValue& dyn_$Value$k__BackingField() {
      static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::RangeValuePair_2::dyn_$Value$k__BackingField");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<Value>k__BackingField"))->offset;
      return *reinterpret_cast<TValue*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public TKey get_From()
    // Offset: 0xFFFFFFFFFFFFFFFF
    TKey get_From() {
      static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::RangeValuePair_2::get_From");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_From", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<TKey, false>(this, ___internal__method);
    }
    // public TKey get_To()
    // Offset: 0xFFFFFFFFFFFFFFFF
    TKey get_To() {
      static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::RangeValuePair_2::get_To");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_To", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<TKey, false>(this, ___internal__method);
    }
    // public TValue get_Value()
    // Offset: 0xFFFFFFFFFFFFFFFF
    TValue get_Value() {
      static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::RangeValuePair_2::get_Value");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_Value", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<TValue, false>(this, ___internal__method);
    }
    // public System.Void .ctor(TKey from, TKey to, TValue value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // ABORTED: conflicts with another method.  RangeValuePair_2(TKey from, TKey to, TValue value)
    // public System.Boolean Equals(IntervalTree.RangeValuePair`2<TKey,TValue> other)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Equals(::IntervalTree::RangeValuePair_2<TKey, TValue> other) {
      static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::RangeValuePair_2::Equals");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "Equals", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(other)})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, other);
    }
    // public override System.String ToString()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString() {
      static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::RangeValuePair_2::ToString");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "ToString", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::StringW, false>(this, ___internal__method);
    }
    // public override System.Int32 GetHashCode()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode() {
      static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::RangeValuePair_2::GetHashCode");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "GetHashCode", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj) {
      static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::RangeValuePair_2::Equals");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "Equals", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(obj)})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, obj);
    }
  }; // IntervalTree.RangeValuePair`2
  // Could not write size check! Type: IntervalTree.RangeValuePair`2 is generic, or has no fields that are valid for size checks!
  // static public System.Boolean op_Equality(IntervalTree.RangeValuePair`2<TKey,TValue> left, IntervalTree.RangeValuePair`2<TKey,TValue> right)
  // Offset: 0xFFFFFFFFFFFFFFFF
  inline bool operator ==(const ::IntervalTree::RangeValuePair_2<TKey, TValue>& left, const ::IntervalTree::RangeValuePair_2<TKey, TValue>& right) {
    static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::RangeValuePair_2::op_Equality");
    static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RangeValuePair_2<TKey, TValue>>::get(), "op_Equality", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(left), ::il2cpp_utils::ExtractType(right)})));
    return ::il2cpp_utils::RunMethodRethrow<bool, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, left, right);
  }
  // static public System.Boolean op_Inequality(IntervalTree.RangeValuePair`2<TKey,TValue> left, IntervalTree.RangeValuePair`2<TKey,TValue> right)
  // Offset: 0xFFFFFFFFFFFFFFFF
  inline bool operator !=(const ::IntervalTree::RangeValuePair_2<TKey, TValue>& left, const ::IntervalTree::RangeValuePair_2<TKey, TValue>& right) {
    static auto ___internal__logger = ::Logger::get().WithContext("::IntervalTree::RangeValuePair_2::op_Inequality");
    static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RangeValuePair_2<TKey, TValue>>::get(), "op_Inequality", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(left), ::il2cpp_utils::ExtractType(right)})));
    return ::il2cpp_utils::RunMethodRethrow<bool, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, left, right);
  }
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
