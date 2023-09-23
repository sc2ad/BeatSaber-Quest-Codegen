#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
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
//  Writing Method size for method: System::Xml::Linq::System__Xml__Linq__XHashtable_1__ExtractKeyDelegate._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Linq::System__Xml__Linq__XHashtable_1__ExtractKeyDelegate::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&System::Xml::Linq::System__Xml__Linq__XHashtable_1__ExtractKeyDelegate::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Linq::System__Xml__Linq__XHashtable_1__ExtractKeyDelegate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Linq::System__Xml__Linq__XHashtable_1__ExtractKeyDelegate.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Linq::System__Xml__Linq__XHashtable_1__ExtractKeyDelegate::*)(TValue)>(&System::Xml::Linq::System__Xml__Linq__XHashtable_1__ExtractKeyDelegate::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::Linq::System__Xml__Linq__XHashtable_1__ExtractKeyDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Linq::System__Xml__Linq__XHashtable_1__ExtractKeyDelegate>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 System::Xml::Linq::System__Xml__Linq__XHashtable_1__ExtractKeyDelegate::System__Xml__Linq__XHashtable_1__ExtractKeyDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<System__Xml__Linq__XHashtable_1__ExtractKeyDelegate>(object, method))) {}
 void System::Xml::Linq::System__Xml__Linq__XHashtable_1__ExtractKeyDelegate::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Linq::System__Xml__Linq__XHashtable_1__ExtractKeyDelegate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::StringW System::Xml::Linq::System__Xml__Linq__XHashtable_1__ExtractKeyDelegate::Invoke(TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Linq::System__Xml__Linq__XHashtable_1__ExtractKeyDelegate>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, value);
}
//  Writing Method size for method: System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState::*)(System::Xml::Linq::System__Xml__Linq__XHashtable_1__ExtractKeyDelegate<TValue>, int32_t)>(&System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Linq::System__Xml__Linq__XHashtable_1__ExtractKeyDelegate<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState.Resize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState<TValue> (System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState::*)()>(&System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState::Resize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState>::get(),
                            "Resize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState.TryGetValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState::*)(::StringW, int32_t, int32_t, ByRef<TValue>)>(&System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState::TryGetValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState>::get(),
                            "TryGetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState.TryAdd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState::*)(TValue, ByRef<TValue>)>(&System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState::TryAdd)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState>::get(),
                            "TryAdd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState.FindEntry
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState::*)(int32_t, ::StringW, int32_t, int32_t, ByRef<int32_t>)>(&System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState::FindEntry)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState>::get(),
                            "FindEntry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState.ComputeHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW, int32_t, int32_t)>(&System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState::ComputeHashCode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState>::get(),
                            "ComputeHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState::__set__buckets(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState::__get__buckets() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState::__set__entries(::ArrayW<GlobalNamespace::System__Xml__Linq__XHashtable_1__XHashtableState__Entry<TValue>> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::System__Xml__Linq__XHashtable_1__XHashtableState__Entry<TValue>>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<GlobalNamespace::System__Xml__Linq__XHashtable_1__XHashtableState__Entry<TValue>>>(value));
}
constexpr ::ArrayW<GlobalNamespace::System__Xml__Linq__XHashtable_1__XHashtableState__Entry<TValue>> System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState::__get__entries() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::System__Xml__Linq__XHashtable_1__XHashtableState__Entry<TValue>>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState::__set__numEntries(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState::__get__numEntries() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState::__set__extractKey(System::Xml::Linq::System__Xml__Linq__XHashtable_1__ExtractKeyDelegate<TValue> value)  {
::cordl_internals::setInstanceField<System::Xml::Linq::System__Xml__Linq__XHashtable_1__ExtractKeyDelegate<TValue>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::Linq::System__Xml__Linq__XHashtable_1__ExtractKeyDelegate<TValue>>(value));
}
constexpr System::Xml::Linq::System__Xml__Linq__XHashtable_1__ExtractKeyDelegate<TValue> System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState::__get__extractKey() const {
return ::cordl_internals::getInstanceField<System::Xml::Linq::System__Xml__Linq__XHashtable_1__ExtractKeyDelegate<TValue>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "extractKey", ty: "System::Xml::Linq::System__Xml__Linq__XHashtable_1__ExtractKeyDelegate<TValue>", modifiers: "", def_value: None }, CppParam { name: "capacity", ty: "int32_t", modifiers: "", def_value: None }]
 System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState::System__Xml__Linq__XHashtable_1__XHashtableState(System::Xml::Linq::System__Xml__Linq__XHashtable_1__ExtractKeyDelegate<TValue> extractKey, int32_t capacity)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<System__Xml__Linq__XHashtable_1__XHashtableState>(extractKey, capacity))) {}
 void System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState::_ctor(System::Xml::Linq::System__Xml__Linq__XHashtable_1__ExtractKeyDelegate<TValue> extractKey, int32_t capacity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Linq::System__Xml__Linq__XHashtable_1__ExtractKeyDelegate<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, extractKey, capacity);
}
 System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState<TValue> System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState::Resize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState>::get(),
                            "Resize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState<TValue>, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState::TryGetValue(::StringW key, int32_t index, int32_t count, ByRef<TValue> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState>::get(),
                            "TryGetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, key, index, count, value);
}
 bool System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState::TryAdd(TValue value, ByRef<TValue> newValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState>::get(),
                            "TryAdd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, value, newValue);
}
 bool System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState::FindEntry(int32_t hashCode, ::StringW key, int32_t index, int32_t count, ByRef<int32_t> entryIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState>::get(),
                            "FindEntry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, hashCode, key, index, count, entryIndex);
}
 int32_t System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState::ComputeHashCode(::StringW key, int32_t index, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState>::get(),
                            "ComputeHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, key, index, count);
}
//  Writing Method size for method: System::Xml::Linq::XHashtable_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Linq::XHashtable_1::*)(System::Xml::Linq::System__Xml__Linq__XHashtable_1__ExtractKeyDelegate<TValue>, int32_t)>(&System::Xml::Linq::XHashtable_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Linq::XHashtable_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Linq::System__Xml__Linq__XHashtable_1__ExtractKeyDelegate<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Linq::XHashtable_1.TryGetValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Linq::XHashtable_1::*)(::StringW, int32_t, int32_t, ByRef<TValue>)>(&System::Xml::Linq::XHashtable_1::TryGetValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Linq::XHashtable_1>::get(),
                            "TryGetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Linq::XHashtable_1.Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TValue (System::Xml::Linq::XHashtable_1::*)(TValue)>(&System::Xml::Linq::XHashtable_1::Add)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Linq::XHashtable_1>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Xml::Linq::XHashtable_1::__set__state(System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState<TValue> value)  {
::cordl_internals::setInstanceField<System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState<TValue>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState<TValue>>(value));
}
constexpr System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState<TValue> System::Xml::Linq::XHashtable_1::__get__state() const {
return ::cordl_internals::getInstanceField<System::Xml::Linq::System__Xml__Linq__XHashtable_1__XHashtableState<TValue>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "extractKey", ty: "System::Xml::Linq::System__Xml__Linq__XHashtable_1__ExtractKeyDelegate<TValue>", modifiers: "", def_value: None }, CppParam { name: "capacity", ty: "int32_t", modifiers: "", def_value: None }]
 System::Xml::Linq::XHashtable_1::XHashtable_1(System::Xml::Linq::System__Xml__Linq__XHashtable_1__ExtractKeyDelegate<TValue> extractKey, int32_t capacity)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<XHashtable_1>(extractKey, capacity))) {}
 void System::Xml::Linq::XHashtable_1::_ctor(System::Xml::Linq::System__Xml__Linq__XHashtable_1__ExtractKeyDelegate<TValue> extractKey, int32_t capacity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Linq::XHashtable_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Linq::System__Xml__Linq__XHashtable_1__ExtractKeyDelegate<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, extractKey, capacity);
}
 bool System::Xml::Linq::XHashtable_1::TryGetValue(::StringW key, int32_t index, int32_t count, ByRef<TValue> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Linq::XHashtable_1>::get(),
                            "TryGetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, key, index, count, value);
}
 TValue System::Xml::Linq::XHashtable_1::Add(TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Linq::XHashtable_1>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(instance), ___internal_method, value);
}
