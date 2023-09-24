#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "IntervalTree/zzzz__RangeValuePair_2_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
/// @brief Convert operator to System::IEquatable_1<IntervalTree::RangeValuePair_2<TKey,TValue>>
constexpr  IntervalTree::RangeValuePair_2<TKey,TValue>::operator System::IEquatable_1<IntervalTree::RangeValuePair_2<TKey,TValue>>() const {
return System::IEquatable_1<IntervalTree::RangeValuePair_2<TKey,TValue>>(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "_From_k__BackingField", ty: "TKey", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_To_k__BackingField", ty: "TKey", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_Value_k__BackingField", ty: "TValue", modifiers: "", def_value: Some("csnull") }]
constexpr IntervalTree::RangeValuePair_2<TKey,TValue>::RangeValuePair_2(TKey _From_k__BackingField, TKey _To_k__BackingField, TValue _Value_k__BackingField) noexcept : ::bs_hook::ValueTypeWrapper() {this->_From_k__BackingField = _From_k__BackingField;
this->_To_k__BackingField = _To_k__BackingField;
this->_Value_k__BackingField = _Value_k__BackingField;
}
constexpr void IntervalTree::RangeValuePair_2<TKey,TValue>::__set__From_k__BackingField(TKey value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->__instance, std::forward<TKey>(value));
}
constexpr TKey IntervalTree::RangeValuePair_2<TKey,TValue>::__get__From_k__BackingField() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->__instance);
}
constexpr void IntervalTree::RangeValuePair_2<TKey,TValue>::__set__To_k__BackingField(TKey value)  {
::cordl_internals::setInstanceField<TKey, 0x8>(this->__instance, std::forward<TKey>(value));
}
constexpr TKey IntervalTree::RangeValuePair_2<TKey,TValue>::__get__To_k__BackingField() const {
return ::cordl_internals::getInstanceField<TKey, 0x8>(this->__instance);
}
constexpr void IntervalTree::RangeValuePair_2<TKey,TValue>::__set__Value_k__BackingField(TValue value)  {
::cordl_internals::setInstanceField<TValue, 0x10>(this->__instance, std::forward<TValue>(value));
}
constexpr TValue IntervalTree::RangeValuePair_2<TKey,TValue>::__get__Value_k__BackingField() const {
return ::cordl_internals::getInstanceField<TValue, 0x10>(this->__instance);
}
 TKey IntervalTree::RangeValuePair_2<TKey,TValue>::get_From()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<IntervalTree::RangeValuePair_2<TKey,TValue>>::get(),
                            "get_From",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 TKey IntervalTree::RangeValuePair_2<TKey,TValue>::get_To()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<IntervalTree::RangeValuePair_2<TKey,TValue>>::get(),
                            "get_To",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 TValue IntervalTree::RangeValuePair_2<TKey,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<IntervalTree::RangeValuePair_2<TKey,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void IntervalTree::RangeValuePair_2<TKey,TValue>::_ctor(TKey from, TKey to, TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<IntervalTree::RangeValuePair_2<TKey,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, from, to, value);
}
 ::StringW IntervalTree::RangeValuePair_2<TKey,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<IntervalTree::RangeValuePair_2<TKey,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t IntervalTree::RangeValuePair_2<TKey,TValue>::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<IntervalTree::RangeValuePair_2<TKey,TValue>>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool IntervalTree::RangeValuePair_2<TKey,TValue>::Equals(IntervalTree::RangeValuePair_2<TKey,TValue> other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<IntervalTree::RangeValuePair_2<TKey,TValue>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<IntervalTree::RangeValuePair_2<TKey,TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 bool IntervalTree::RangeValuePair_2<TKey,TValue>::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<IntervalTree::RangeValuePair_2<TKey,TValue>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, obj);
}
 bool IntervalTree::RangeValuePair_2<TKey,TValue>::op_Equality(IntervalTree::RangeValuePair_2<TKey,TValue> left, IntervalTree::RangeValuePair_2<TKey,TValue> right)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<IntervalTree::RangeValuePair_2<TKey,TValue>>::get(),
                            "op_Equality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<IntervalTree::RangeValuePair_2<TKey,TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<IntervalTree::RangeValuePair_2<TKey,TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
 bool IntervalTree::RangeValuePair_2<TKey,TValue>::op_Inequality(IntervalTree::RangeValuePair_2<TKey,TValue> left, IntervalTree::RangeValuePair_2<TKey,TValue> right)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<IntervalTree::RangeValuePair_2<TKey,TValue>>::get(),
                            "op_Inequality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<IntervalTree::RangeValuePair_2<TKey,TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<IntervalTree::RangeValuePair_2<TKey,TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
