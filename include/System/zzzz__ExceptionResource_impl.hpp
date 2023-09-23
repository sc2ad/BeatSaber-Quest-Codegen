#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ExceptionResource_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::ExceptionResource::ExceptionResource(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::ExceptionResource::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::ExceptionResource::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::ExceptionResource  System::ExceptionResource::Argument_ImplementIComparable{0};
constexpr System::ExceptionResource  System::ExceptionResource::Argument_InvalidType{1};
constexpr System::ExceptionResource  System::ExceptionResource::Argument_InvalidArgumentForComparison{2};
constexpr System::ExceptionResource  System::ExceptionResource::Argument_InvalidRegistryKeyPermissionCheck{3};
constexpr System::ExceptionResource  System::ExceptionResource::ArgumentOutOfRange_NeedNonNegNum{4};
constexpr System::ExceptionResource  System::ExceptionResource::Arg_ArrayPlusOffTooSmall{5};
constexpr System::ExceptionResource  System::ExceptionResource::Arg_NonZeroLowerBound{6};
constexpr System::ExceptionResource  System::ExceptionResource::Arg_RankMultiDimNotSupported{7};
constexpr System::ExceptionResource  System::ExceptionResource::Arg_RegKeyDelHive{8};
constexpr System::ExceptionResource  System::ExceptionResource::Arg_RegKeyStrLenBug{9};
constexpr System::ExceptionResource  System::ExceptionResource::Arg_RegSetStrArrNull{10};
constexpr System::ExceptionResource  System::ExceptionResource::Arg_RegSetMismatchedKind{11};
constexpr System::ExceptionResource  System::ExceptionResource::Arg_RegSubKeyAbsent{12};
constexpr System::ExceptionResource  System::ExceptionResource::Arg_RegSubKeyValueAbsent{13};
constexpr System::ExceptionResource  System::ExceptionResource::Argument_AddingDuplicate{14};
constexpr System::ExceptionResource  System::ExceptionResource::Serialization_InvalidOnDeser{15};
constexpr System::ExceptionResource  System::ExceptionResource::Serialization_MissingKeys{16};
constexpr System::ExceptionResource  System::ExceptionResource::Serialization_NullKey{17};
constexpr System::ExceptionResource  System::ExceptionResource::Argument_InvalidArrayType{18};
constexpr System::ExceptionResource  System::ExceptionResource::NotSupported_KeyCollectionSet{19};
constexpr System::ExceptionResource  System::ExceptionResource::NotSupported_ValueCollectionSet{20};
constexpr System::ExceptionResource  System::ExceptionResource::ArgumentOutOfRange_SmallCapacity{21};
constexpr System::ExceptionResource  System::ExceptionResource::ArgumentOutOfRange_Index{22};
constexpr System::ExceptionResource  System::ExceptionResource::Argument_InvalidOffLen{23};
constexpr System::ExceptionResource  System::ExceptionResource::Argument_ItemNotExist{24};
constexpr System::ExceptionResource  System::ExceptionResource::ArgumentOutOfRange_Count{25};
constexpr System::ExceptionResource  System::ExceptionResource::ArgumentOutOfRange_InvalidThreshold{26};
constexpr System::ExceptionResource  System::ExceptionResource::ArgumentOutOfRange_ListInsert{27};
constexpr System::ExceptionResource  System::ExceptionResource::NotSupported_ReadOnlyCollection{28};
constexpr System::ExceptionResource  System::ExceptionResource::InvalidOperation_CannotRemoveFromStackOrQueue{29};
constexpr System::ExceptionResource  System::ExceptionResource::InvalidOperation_EmptyQueue{30};
constexpr System::ExceptionResource  System::ExceptionResource::InvalidOperation_EnumOpCantHappen{31};
constexpr System::ExceptionResource  System::ExceptionResource::InvalidOperation_EnumFailedVersion{32};
constexpr System::ExceptionResource  System::ExceptionResource::InvalidOperation_EmptyStack{33};
constexpr System::ExceptionResource  System::ExceptionResource::ArgumentOutOfRange_BiggerThanCollection{34};
constexpr System::ExceptionResource  System::ExceptionResource::InvalidOperation_EnumNotStarted{35};
constexpr System::ExceptionResource  System::ExceptionResource::InvalidOperation_EnumEnded{36};
constexpr System::ExceptionResource  System::ExceptionResource::NotSupported_SortedListNestedWrite{37};
constexpr System::ExceptionResource  System::ExceptionResource::InvalidOperation_NoValue{38};
constexpr System::ExceptionResource  System::ExceptionResource::InvalidOperation_RegRemoveSubKey{39};
constexpr System::ExceptionResource  System::ExceptionResource::Security_RegistryPermission{40};
constexpr System::ExceptionResource  System::ExceptionResource::UnauthorizedAccess_RegistryNoWrite{41};
constexpr System::ExceptionResource  System::ExceptionResource::ObjectDisposed_RegKeyClosed{42};
constexpr System::ExceptionResource  System::ExceptionResource::NotSupported_InComparableType{43};
constexpr System::ExceptionResource  System::ExceptionResource::Argument_InvalidRegistryOptionsCheck{44};
constexpr System::ExceptionResource  System::ExceptionResource::Argument_InvalidRegistryViewCheck{45};
constexpr System::ExceptionResource  System::ExceptionResource::TaskT_TransitionToFinal_AlreadyCompleted{46};
constexpr System::ExceptionResource  System::ExceptionResource::TaskCompletionSourceT_TrySetException_NullException{47};
constexpr System::ExceptionResource  System::ExceptionResource::TaskCompletionSourceT_TrySetException_NoExceptions{48};
constexpr System::ExceptionResource  System::ExceptionResource::NotSupported_StringComparison{49};
constexpr System::ExceptionResource  System::ExceptionResource::InvalidOperation_NullArray{50};
