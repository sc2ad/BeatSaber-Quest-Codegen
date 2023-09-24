#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "System/Xml/Linq/zzzz__XHashtable_1_def.hpp"
#include "System/Xml/Linq/zzzz__XHashtable_1_def.hpp"
// Ctor Parameters [CppParam { name: "Value", ty: "TValue", modifiers: "", def_value: Some("csnull") }, CppParam { name: "HashCode", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Next", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::System__Xml__Linq__XHashtable_1__XHashtableState__Entry::System__Xml__Linq__XHashtable_1__XHashtableState__Entry(TValue Value, int32_t HashCode, int32_t Next) noexcept : ::bs_hook::ValueTypeWrapper() {this->Value = Value;
this->HashCode = HashCode;
this->Next = Next;
}
constexpr void GlobalNamespace::System__Xml__Linq__XHashtable_1__XHashtableState__Entry::__set_Value(TValue value)  {
::cordl_internals::setInstanceField<TValue, 0x0>(this->__instance, std::forward<TValue>(value));
}
constexpr TValue GlobalNamespace::System__Xml__Linq__XHashtable_1__XHashtableState__Entry::__get_Value() const {
return ::cordl_internals::getInstanceField<TValue, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::System__Xml__Linq__XHashtable_1__XHashtableState__Entry::__set_HashCode(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::System__Xml__Linq__XHashtable_1__XHashtableState__Entry::__get_HashCode() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::System__Xml__Linq__XHashtable_1__XHashtableState__Entry::__set_Next(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::System__Xml__Linq__XHashtable_1__XHashtableState__Entry::__get_Next() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->__instance);
}
 System::Xml::Linq::System__Xml__Linq__XHashtable_1__ExtractKeyDelegate<TValue> System::Xml::Linq::System__Xml__Linq__XHashtable_1__ExtractKeyDelegate<TValue>::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
System::Xml::Linq::System__Xml__Linq__XHashtable_1__ExtractKeyDelegate<TValue> o{THROW_UNLESS(::il2cpp_utils::New<System::Xml::Linq::System__Xml__Linq__XHashtable_1__ExtractKeyDelegate<TValue>>(object, method))};
return o;
}
 void System::Xml::Linq::System__Xml__Linq__XHashtable_1__ExtractKeyDelegate<TValue>::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Linq::System__Xml__Linq__XHashtable_1__ExtractKeyDelegate<TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::StringW System::Xml::Linq::System__Xml__Linq__XHashtable_1__ExtractKeyDelegate<TValue>::Invoke(TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Linq::System__Xml__Linq__XHashtable_1__ExtractKeyDelegate<TValue>>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, value);
}
constexpr void System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState<TValue>::__set__buckets(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState<TValue>::__get__buckets() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState<TValue>::__set__entries(::ArrayW<GlobalNamespace::System__Xml__Linq__XHashtable_1__XHashtableState__Entry<TValue>> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::System__Xml__Linq__XHashtable_1__XHashtableState__Entry<TValue>>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<GlobalNamespace::System__Xml__Linq__XHashtable_1__XHashtableState__Entry<TValue>>>(value));
}
constexpr ::ArrayW<GlobalNamespace::System__Xml__Linq__XHashtable_1__XHashtableState__Entry<TValue>> System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState<TValue>::__get__entries() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::System__Xml__Linq__XHashtable_1__XHashtableState__Entry<TValue>>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState<TValue>::__set__numEntries(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState<TValue>::__get__numEntries() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState<TValue>::__set__extractKey(System::Xml::Linq::System__Xml__Linq__XHashtable_1__ExtractKeyDelegate<TValue> value)  {
::cordl_internals::setInstanceField<System::Xml::Linq::System__Xml__Linq__XHashtable_1__ExtractKeyDelegate<TValue>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::Linq::System__Xml__Linq__XHashtable_1__ExtractKeyDelegate<TValue>>(value));
}
constexpr System::Xml::Linq::System__Xml__Linq__XHashtable_1__ExtractKeyDelegate<TValue> System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState<TValue>::__get__extractKey() const {
return ::cordl_internals::getInstanceField<System::Xml::Linq::System__Xml__Linq__XHashtable_1__ExtractKeyDelegate<TValue>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState<TValue> System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState<TValue>::New_ctor(System::Xml::Linq::System__Xml__Linq__XHashtable_1__ExtractKeyDelegate<TValue> extractKey, int32_t capacity)  {
System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState<TValue> o{THROW_UNLESS(::il2cpp_utils::New<System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState<TValue>>(extractKey, capacity))};
return o;
}
 void System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState<TValue>::_ctor(System::Xml::Linq::System__Xml__Linq__XHashtable_1__ExtractKeyDelegate<TValue> extractKey, int32_t capacity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState<TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Linq::System__Xml__Linq__XHashtable_1__ExtractKeyDelegate<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, extractKey, capacity);
}
 System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState<TValue> System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState<TValue>::Resize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState<TValue>>::get(),
                            "Resize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState<TValue>, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState<TValue>::TryGetValue(::StringW key, int32_t index, int32_t count, ByRef<TValue> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState<TValue>>::get(),
                            "TryGetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, key, index, count, value);
}
 bool System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState<TValue>::TryAdd(TValue value, ByRef<TValue> newValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState<TValue>>::get(),
                            "TryAdd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, value, newValue);
}
 bool System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState<TValue>::FindEntry(int32_t hashCode, ::StringW key, int32_t index, int32_t count, ByRef<int32_t> entryIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState<TValue>>::get(),
                            "FindEntry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, hashCode, key, index, count, entryIndex);
}
 int32_t System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState<TValue>::ComputeHashCode(::StringW key, int32_t index, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState<TValue>>::get(),
                            "ComputeHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, key, index, count);
}
constexpr void System::Xml::Linq::XHashtable_1<TValue>::__set__state(System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState<TValue> value)  {
::cordl_internals::setInstanceField<System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState<TValue>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState<TValue>>(value));
}
constexpr System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState<TValue> System::Xml::Linq::XHashtable_1<TValue>::__get__state() const {
return ::cordl_internals::getInstanceField<System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState<TValue>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Xml::Linq::XHashtable_1<TValue> System::Xml::Linq::XHashtable_1<TValue>::New_ctor(System::Xml::Linq::System__Xml__Linq__XHashtable_1__ExtractKeyDelegate<TValue> extractKey, int32_t capacity)  {
System::Xml::Linq::XHashtable_1<TValue> o{THROW_UNLESS(::il2cpp_utils::New<System::Xml::Linq::XHashtable_1<TValue>>(extractKey, capacity))};
return o;
}
 void System::Xml::Linq::XHashtable_1<TValue>::_ctor(System::Xml::Linq::System__Xml__Linq__XHashtable_1__ExtractKeyDelegate<TValue> extractKey, int32_t capacity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Linq::XHashtable_1<TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Linq::System__Xml__Linq__XHashtable_1__ExtractKeyDelegate<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, extractKey, capacity);
}
 bool System::Xml::Linq::XHashtable_1<TValue>::TryGetValue(::StringW key, int32_t index, int32_t count, ByRef<TValue> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Linq::XHashtable_1<TValue>>::get(),
                            "TryGetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, key, index, count, value);
}
 TValue System::Xml::Linq::XHashtable_1<TValue>::Add(TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Linq::XHashtable_1<TValue>>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(instance), ___internal_method, value);
}
