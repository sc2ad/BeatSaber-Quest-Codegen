#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "System/Linq/zzzz__Set_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Edge_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__EdgeLookup_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
// Ctor Parameters [CppParam { name: "hashCode", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TElement", modifiers: "", def_value: Some("csnull") }, CppParam { name: "next", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Linq::System__Linq__Set_1__Slot::System__Linq__Set_1__Slot(int32_t hashCode, TElement value, int32_t next) noexcept : ::bs_hook::ValueTypeWrapper() {this->hashCode = hashCode;
this->value = value;
this->next = next;
}
constexpr void System::Linq::System__Linq__Set_1__Slot::__set_hashCode(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Linq::System__Linq__Set_1__Slot::__get_hashCode() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void System::Linq::System__Linq__Set_1__Slot::__set_value(TElement value)  {
::cordl_internals::setInstanceField<TElement, 0x8>(this->__instance, std::forward<TElement>(value));
}
constexpr TElement System::Linq::System__Linq__Set_1__Slot::__get_value() const {
return ::cordl_internals::getInstanceField<TElement, 0x8>(this->__instance);
}
constexpr void System::Linq::System__Linq__Set_1__Slot::__set_next(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Linq::System__Linq__Set_1__Slot::__get_next() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->__instance);
}
//  Writing Method size for method: System::Linq::Set_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Linq::Set_1::*)(System::Collections::Generic::IEqualityComparer_1<TElement>)>(&System::Linq::Set_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::Set_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEqualityComparer_1<TElement>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Linq::Set_1.Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Linq::Set_1::*)(TElement)>(&System::Linq::Set_1::Add)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::Set_1>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TElement>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Linq::Set_1.Find
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Linq::Set_1::*)(TElement, bool)>(&System::Linq::Set_1::Find)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::Set_1>::get(),
                            "Find",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Linq::Set_1.Resize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Linq::Set_1::*)()>(&System::Linq::Set_1::Resize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::Set_1>::get(),
                            "Resize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Linq::Set_1.InternalGetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Linq::Set_1::*)(TElement)>(&System::Linq::Set_1::InternalGetHashCode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::Set_1>::get(),
                            "InternalGetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TElement>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Linq::Set_1::__set_buckets(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> System::Linq::Set_1::__get_buckets() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Linq::Set_1::__set_slots(::ArrayW<System::Linq::System__Linq__Set_1__Slot<TElement>> value)  {
::cordl_internals::setInstanceField<::ArrayW<System::Linq::System__Linq__Set_1__Slot<TElement>>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<System::Linq::System__Linq__Set_1__Slot<TElement>>>(value));
}
constexpr ::ArrayW<System::Linq::System__Linq__Set_1__Slot<TElement>> System::Linq::Set_1::__get_slots() const {
return ::cordl_internals::getInstanceField<::ArrayW<System::Linq::System__Linq__Set_1__Slot<TElement>>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Linq::Set_1::__set_count(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Linq::Set_1::__get_count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Linq::Set_1::__set_freeList(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Linq::Set_1::__get_freeList() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Linq::Set_1::__set_comparer(System::Collections::Generic::IEqualityComparer_1<TElement> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IEqualityComparer_1<TElement>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::IEqualityComparer_1<TElement>>(value));
}
constexpr System::Collections::Generic::IEqualityComparer_1<TElement> System::Linq::Set_1::__get_comparer() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IEqualityComparer_1<TElement>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "comparer", ty: "System::Collections::Generic::IEqualityComparer_1<TElement>", modifiers: "", def_value: None }]
 System::Linq::Set_1::Set_1(System::Collections::Generic::IEqualityComparer_1<TElement> comparer)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Set_1>(comparer))) {}
 void System::Linq::Set_1::_ctor(System::Collections::Generic::IEqualityComparer_1<TElement> comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::Set_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEqualityComparer_1<TElement>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, comparer);
}
 bool System::Linq::Set_1::Add(TElement value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::Set_1>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TElement>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool System::Linq::Set_1::Find(TElement value, bool add)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::Set_1>::get(),
                            "Find",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, value, add);
}
 void System::Linq::Set_1::Resize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::Set_1>::get(),
                            "Resize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Linq::Set_1::InternalGetHashCode(TElement value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::Set_1>::get(),
                            "InternalGetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TElement>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, value);
}
//  Writing Method size for method: System::Linq::Set_1<int32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Linq::Set_1<int32_t>::*)(System::Collections::Generic::IEqualityComparer_1<int32_t>)>(&System::Linq::Set_1<int32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::Set_1<int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEqualityComparer_1<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Linq::Set_1<int32_t>.Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Linq::Set_1<int32_t>::*)(int32_t)>(&System::Linq::Set_1<int32_t>::Add)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::Set_1<int32_t>>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Linq::Set_1<int32_t>.Find
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Linq::Set_1<int32_t>::*)(int32_t, bool)>(&System::Linq::Set_1<int32_t>::Find)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::Set_1<int32_t>>::get(),
                            "Find",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Linq::Set_1<int32_t>.Resize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Linq::Set_1<int32_t>::*)()>(&System::Linq::Set_1<int32_t>::Resize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::Set_1<int32_t>>::get(),
                            "Resize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Linq::Set_1<int32_t>.InternalGetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Linq::Set_1<int32_t>::*)(int32_t)>(&System::Linq::Set_1<int32_t>::InternalGetHashCode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::Set_1<int32_t>>::get(),
                            "InternalGetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Linq::Set_1<int32_t>::__set_buckets(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> System::Linq::Set_1<int32_t>::__get_buckets() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Linq::Set_1<int32_t>::__set_slots(::ArrayW<System::Linq::System__Linq__Set_1__Slot<int32_t>> value)  {
::cordl_internals::setInstanceField<::ArrayW<System::Linq::System__Linq__Set_1__Slot<int32_t>>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<System::Linq::System__Linq__Set_1__Slot<int32_t>>>(value));
}
constexpr ::ArrayW<System::Linq::System__Linq__Set_1__Slot<int32_t>> System::Linq::Set_1<int32_t>::__get_slots() const {
return ::cordl_internals::getInstanceField<::ArrayW<System::Linq::System__Linq__Set_1__Slot<int32_t>>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Linq::Set_1<int32_t>::__set_count(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Linq::Set_1<int32_t>::__get_count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Linq::Set_1<int32_t>::__set_freeList(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Linq::Set_1<int32_t>::__get_freeList() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Linq::Set_1<int32_t>::__set_comparer(System::Collections::Generic::IEqualityComparer_1<int32_t> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IEqualityComparer_1<int32_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::IEqualityComparer_1<int32_t>>(value));
}
constexpr System::Collections::Generic::IEqualityComparer_1<int32_t> System::Linq::Set_1<int32_t>::__get_comparer() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IEqualityComparer_1<int32_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "comparer", ty: "System::Collections::Generic::IEqualityComparer_1<int32_t>", modifiers: "", def_value: None }]
 System::Linq::Set_1<int32_t>::Set_1(System::Collections::Generic::IEqualityComparer_1<int32_t> comparer)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Set_1>(comparer))) {}
 void System::Linq::Set_1<int32_t>::_ctor(System::Collections::Generic::IEqualityComparer_1<int32_t> comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::Set_1<int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEqualityComparer_1<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, comparer);
}
 bool System::Linq::Set_1<int32_t>::Add(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::Set_1<int32_t>>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool System::Linq::Set_1<int32_t>::Find(int32_t value, bool add)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::Set_1<int32_t>>::get(),
                            "Find",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, value, add);
}
 void System::Linq::Set_1<int32_t>::Resize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::Set_1<int32_t>>::get(),
                            "Resize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Linq::Set_1<int32_t>::InternalGetHashCode(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::Set_1<int32_t>>::get(),
                            "InternalGetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, value);
}
//  Writing Method size for method: System::Linq::Set_1<char16_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Linq::Set_1<char16_t>::*)(System::Collections::Generic::IEqualityComparer_1<char16_t>)>(&System::Linq::Set_1<char16_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::Set_1<char16_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEqualityComparer_1<char16_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Linq::Set_1<char16_t>.Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Linq::Set_1<char16_t>::*)(char16_t)>(&System::Linq::Set_1<char16_t>::Add)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::Set_1<char16_t>>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Linq::Set_1<char16_t>.Find
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Linq::Set_1<char16_t>::*)(char16_t, bool)>(&System::Linq::Set_1<char16_t>::Find)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::Set_1<char16_t>>::get(),
                            "Find",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Linq::Set_1<char16_t>.Resize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Linq::Set_1<char16_t>::*)()>(&System::Linq::Set_1<char16_t>::Resize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::Set_1<char16_t>>::get(),
                            "Resize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Linq::Set_1<char16_t>.InternalGetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Linq::Set_1<char16_t>::*)(char16_t)>(&System::Linq::Set_1<char16_t>::InternalGetHashCode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::Set_1<char16_t>>::get(),
                            "InternalGetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Linq::Set_1<char16_t>::__set_buckets(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> System::Linq::Set_1<char16_t>::__get_buckets() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Linq::Set_1<char16_t>::__set_slots(::ArrayW<System::Linq::System__Linq__Set_1__Slot<char16_t>> value)  {
::cordl_internals::setInstanceField<::ArrayW<System::Linq::System__Linq__Set_1__Slot<char16_t>>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<System::Linq::System__Linq__Set_1__Slot<char16_t>>>(value));
}
constexpr ::ArrayW<System::Linq::System__Linq__Set_1__Slot<char16_t>> System::Linq::Set_1<char16_t>::__get_slots() const {
return ::cordl_internals::getInstanceField<::ArrayW<System::Linq::System__Linq__Set_1__Slot<char16_t>>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Linq::Set_1<char16_t>::__set_count(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Linq::Set_1<char16_t>::__get_count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Linq::Set_1<char16_t>::__set_freeList(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Linq::Set_1<char16_t>::__get_freeList() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Linq::Set_1<char16_t>::__set_comparer(System::Collections::Generic::IEqualityComparer_1<char16_t> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IEqualityComparer_1<char16_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::IEqualityComparer_1<char16_t>>(value));
}
constexpr System::Collections::Generic::IEqualityComparer_1<char16_t> System::Linq::Set_1<char16_t>::__get_comparer() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IEqualityComparer_1<char16_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "comparer", ty: "System::Collections::Generic::IEqualityComparer_1<char16_t>", modifiers: "", def_value: None }]
 System::Linq::Set_1<char16_t>::Set_1(System::Collections::Generic::IEqualityComparer_1<char16_t> comparer)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Set_1>(comparer))) {}
 void System::Linq::Set_1<char16_t>::_ctor(System::Collections::Generic::IEqualityComparer_1<char16_t> comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::Set_1<char16_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEqualityComparer_1<char16_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, comparer);
}
 bool System::Linq::Set_1<char16_t>::Add(char16_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::Set_1<char16_t>>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool System::Linq::Set_1<char16_t>::Find(char16_t value, bool add)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::Set_1<char16_t>>::get(),
                            "Find",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, value, add);
}
 void System::Linq::Set_1<char16_t>::Resize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::Set_1<char16_t>>::get(),
                            "Resize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Linq::Set_1<char16_t>::InternalGetHashCode(char16_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::Set_1<char16_t>>::get(),
                            "InternalGetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, value);
}
//  Writing Method size for method: System::Linq::Set_1<UnityEngine::ProBuilder::Edge>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Linq::Set_1<UnityEngine::ProBuilder::Edge>::*)(System::Collections::Generic::IEqualityComparer_1<UnityEngine::ProBuilder::Edge>)>(&System::Linq::Set_1<UnityEngine::ProBuilder::Edge>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::Set_1<UnityEngine::ProBuilder::Edge>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEqualityComparer_1<UnityEngine::ProBuilder::Edge>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Linq::Set_1<UnityEngine::ProBuilder::Edge>.Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Linq::Set_1<UnityEngine::ProBuilder::Edge>::*)(UnityEngine::ProBuilder::Edge)>(&System::Linq::Set_1<UnityEngine::ProBuilder::Edge>::Add)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::Set_1<UnityEngine::ProBuilder::Edge>>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::Edge>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Linq::Set_1<UnityEngine::ProBuilder::Edge>.Find
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Linq::Set_1<UnityEngine::ProBuilder::Edge>::*)(UnityEngine::ProBuilder::Edge, bool)>(&System::Linq::Set_1<UnityEngine::ProBuilder::Edge>::Find)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::Set_1<UnityEngine::ProBuilder::Edge>>::get(),
                            "Find",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::Edge>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Linq::Set_1<UnityEngine::ProBuilder::Edge>.Resize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Linq::Set_1<UnityEngine::ProBuilder::Edge>::*)()>(&System::Linq::Set_1<UnityEngine::ProBuilder::Edge>::Resize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::Set_1<UnityEngine::ProBuilder::Edge>>::get(),
                            "Resize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Linq::Set_1<UnityEngine::ProBuilder::Edge>.InternalGetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Linq::Set_1<UnityEngine::ProBuilder::Edge>::*)(UnityEngine::ProBuilder::Edge)>(&System::Linq::Set_1<UnityEngine::ProBuilder::Edge>::InternalGetHashCode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::Set_1<UnityEngine::ProBuilder::Edge>>::get(),
                            "InternalGetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::Edge>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Linq::Set_1<UnityEngine::ProBuilder::Edge>::__set_buckets(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> System::Linq::Set_1<UnityEngine::ProBuilder::Edge>::__get_buckets() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Linq::Set_1<UnityEngine::ProBuilder::Edge>::__set_slots(::ArrayW<System::Linq::System__Linq__Set_1__Slot<UnityEngine::ProBuilder::Edge>> value)  {
::cordl_internals::setInstanceField<::ArrayW<System::Linq::System__Linq__Set_1__Slot<UnityEngine::ProBuilder::Edge>>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<System::Linq::System__Linq__Set_1__Slot<UnityEngine::ProBuilder::Edge>>>(value));
}
constexpr ::ArrayW<System::Linq::System__Linq__Set_1__Slot<UnityEngine::ProBuilder::Edge>> System::Linq::Set_1<UnityEngine::ProBuilder::Edge>::__get_slots() const {
return ::cordl_internals::getInstanceField<::ArrayW<System::Linq::System__Linq__Set_1__Slot<UnityEngine::ProBuilder::Edge>>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Linq::Set_1<UnityEngine::ProBuilder::Edge>::__set_count(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Linq::Set_1<UnityEngine::ProBuilder::Edge>::__get_count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Linq::Set_1<UnityEngine::ProBuilder::Edge>::__set_freeList(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Linq::Set_1<UnityEngine::ProBuilder::Edge>::__get_freeList() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Linq::Set_1<UnityEngine::ProBuilder::Edge>::__set_comparer(System::Collections::Generic::IEqualityComparer_1<UnityEngine::ProBuilder::Edge> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IEqualityComparer_1<UnityEngine::ProBuilder::Edge>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::IEqualityComparer_1<UnityEngine::ProBuilder::Edge>>(value));
}
constexpr System::Collections::Generic::IEqualityComparer_1<UnityEngine::ProBuilder::Edge> System::Linq::Set_1<UnityEngine::ProBuilder::Edge>::__get_comparer() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IEqualityComparer_1<UnityEngine::ProBuilder::Edge>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "comparer", ty: "System::Collections::Generic::IEqualityComparer_1<UnityEngine::ProBuilder::Edge>", modifiers: "", def_value: None }]
 System::Linq::Set_1<UnityEngine::ProBuilder::Edge>::Set_1(System::Collections::Generic::IEqualityComparer_1<UnityEngine::ProBuilder::Edge> comparer)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Set_1>(comparer))) {}
 void System::Linq::Set_1<UnityEngine::ProBuilder::Edge>::_ctor(System::Collections::Generic::IEqualityComparer_1<UnityEngine::ProBuilder::Edge> comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::Set_1<UnityEngine::ProBuilder::Edge>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEqualityComparer_1<UnityEngine::ProBuilder::Edge>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, comparer);
}
 bool System::Linq::Set_1<UnityEngine::ProBuilder::Edge>::Add(UnityEngine::ProBuilder::Edge value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::Set_1<UnityEngine::ProBuilder::Edge>>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::Edge>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool System::Linq::Set_1<UnityEngine::ProBuilder::Edge>::Find(UnityEngine::ProBuilder::Edge value, bool add)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::Set_1<UnityEngine::ProBuilder::Edge>>::get(),
                            "Find",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::Edge>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, value, add);
}
 void System::Linq::Set_1<UnityEngine::ProBuilder::Edge>::Resize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::Set_1<UnityEngine::ProBuilder::Edge>>::get(),
                            "Resize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Linq::Set_1<UnityEngine::ProBuilder::Edge>::InternalGetHashCode(UnityEngine::ProBuilder::Edge value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::Set_1<UnityEngine::ProBuilder::Edge>>::get(),
                            "InternalGetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::Edge>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, value);
}
//  Writing Method size for method: System::Linq::Set_1<UnityEngine::ProBuilder::EdgeLookup>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Linq::Set_1<UnityEngine::ProBuilder::EdgeLookup>::*)(System::Collections::Generic::IEqualityComparer_1<UnityEngine::ProBuilder::EdgeLookup>)>(&System::Linq::Set_1<UnityEngine::ProBuilder::EdgeLookup>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::Set_1<UnityEngine::ProBuilder::EdgeLookup>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEqualityComparer_1<UnityEngine::ProBuilder::EdgeLookup>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Linq::Set_1<UnityEngine::ProBuilder::EdgeLookup>.Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Linq::Set_1<UnityEngine::ProBuilder::EdgeLookup>::*)(UnityEngine::ProBuilder::EdgeLookup)>(&System::Linq::Set_1<UnityEngine::ProBuilder::EdgeLookup>::Add)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::Set_1<UnityEngine::ProBuilder::EdgeLookup>>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::EdgeLookup>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Linq::Set_1<UnityEngine::ProBuilder::EdgeLookup>.Find
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Linq::Set_1<UnityEngine::ProBuilder::EdgeLookup>::*)(UnityEngine::ProBuilder::EdgeLookup, bool)>(&System::Linq::Set_1<UnityEngine::ProBuilder::EdgeLookup>::Find)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::Set_1<UnityEngine::ProBuilder::EdgeLookup>>::get(),
                            "Find",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::EdgeLookup>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Linq::Set_1<UnityEngine::ProBuilder::EdgeLookup>.Resize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Linq::Set_1<UnityEngine::ProBuilder::EdgeLookup>::*)()>(&System::Linq::Set_1<UnityEngine::ProBuilder::EdgeLookup>::Resize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::Set_1<UnityEngine::ProBuilder::EdgeLookup>>::get(),
                            "Resize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Linq::Set_1<UnityEngine::ProBuilder::EdgeLookup>.InternalGetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Linq::Set_1<UnityEngine::ProBuilder::EdgeLookup>::*)(UnityEngine::ProBuilder::EdgeLookup)>(&System::Linq::Set_1<UnityEngine::ProBuilder::EdgeLookup>::InternalGetHashCode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::Set_1<UnityEngine::ProBuilder::EdgeLookup>>::get(),
                            "InternalGetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::EdgeLookup>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Linq::Set_1<UnityEngine::ProBuilder::EdgeLookup>::__set_buckets(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> System::Linq::Set_1<UnityEngine::ProBuilder::EdgeLookup>::__get_buckets() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Linq::Set_1<UnityEngine::ProBuilder::EdgeLookup>::__set_slots(::ArrayW<System::Linq::System__Linq__Set_1__Slot<UnityEngine::ProBuilder::EdgeLookup>> value)  {
::cordl_internals::setInstanceField<::ArrayW<System::Linq::System__Linq__Set_1__Slot<UnityEngine::ProBuilder::EdgeLookup>>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<System::Linq::System__Linq__Set_1__Slot<UnityEngine::ProBuilder::EdgeLookup>>>(value));
}
constexpr ::ArrayW<System::Linq::System__Linq__Set_1__Slot<UnityEngine::ProBuilder::EdgeLookup>> System::Linq::Set_1<UnityEngine::ProBuilder::EdgeLookup>::__get_slots() const {
return ::cordl_internals::getInstanceField<::ArrayW<System::Linq::System__Linq__Set_1__Slot<UnityEngine::ProBuilder::EdgeLookup>>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Linq::Set_1<UnityEngine::ProBuilder::EdgeLookup>::__set_count(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Linq::Set_1<UnityEngine::ProBuilder::EdgeLookup>::__get_count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Linq::Set_1<UnityEngine::ProBuilder::EdgeLookup>::__set_freeList(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Linq::Set_1<UnityEngine::ProBuilder::EdgeLookup>::__get_freeList() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Linq::Set_1<UnityEngine::ProBuilder::EdgeLookup>::__set_comparer(System::Collections::Generic::IEqualityComparer_1<UnityEngine::ProBuilder::EdgeLookup> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IEqualityComparer_1<UnityEngine::ProBuilder::EdgeLookup>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::IEqualityComparer_1<UnityEngine::ProBuilder::EdgeLookup>>(value));
}
constexpr System::Collections::Generic::IEqualityComparer_1<UnityEngine::ProBuilder::EdgeLookup> System::Linq::Set_1<UnityEngine::ProBuilder::EdgeLookup>::__get_comparer() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IEqualityComparer_1<UnityEngine::ProBuilder::EdgeLookup>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "comparer", ty: "System::Collections::Generic::IEqualityComparer_1<UnityEngine::ProBuilder::EdgeLookup>", modifiers: "", def_value: None }]
 System::Linq::Set_1<UnityEngine::ProBuilder::EdgeLookup>::Set_1(System::Collections::Generic::IEqualityComparer_1<UnityEngine::ProBuilder::EdgeLookup> comparer)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Set_1>(comparer))) {}
 void System::Linq::Set_1<UnityEngine::ProBuilder::EdgeLookup>::_ctor(System::Collections::Generic::IEqualityComparer_1<UnityEngine::ProBuilder::EdgeLookup> comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::Set_1<UnityEngine::ProBuilder::EdgeLookup>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEqualityComparer_1<UnityEngine::ProBuilder::EdgeLookup>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, comparer);
}
 bool System::Linq::Set_1<UnityEngine::ProBuilder::EdgeLookup>::Add(UnityEngine::ProBuilder::EdgeLookup value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::Set_1<UnityEngine::ProBuilder::EdgeLookup>>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::EdgeLookup>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool System::Linq::Set_1<UnityEngine::ProBuilder::EdgeLookup>::Find(UnityEngine::ProBuilder::EdgeLookup value, bool add)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::Set_1<UnityEngine::ProBuilder::EdgeLookup>>::get(),
                            "Find",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::EdgeLookup>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, value, add);
}
 void System::Linq::Set_1<UnityEngine::ProBuilder::EdgeLookup>::Resize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::Set_1<UnityEngine::ProBuilder::EdgeLookup>>::get(),
                            "Resize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Linq::Set_1<UnityEngine::ProBuilder::EdgeLookup>::InternalGetHashCode(UnityEngine::ProBuilder::EdgeLookup value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::Set_1<UnityEngine::ProBuilder::EdgeLookup>>::get(),
                            "InternalGetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::EdgeLookup>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, value);
}
//  Writing Method size for method: System::Linq::Set_1<UnityEngine::SceneManagement::Scene>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Linq::Set_1<UnityEngine::SceneManagement::Scene>::*)(System::Collections::Generic::IEqualityComparer_1<UnityEngine::SceneManagement::Scene>)>(&System::Linq::Set_1<UnityEngine::SceneManagement::Scene>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::Set_1<UnityEngine::SceneManagement::Scene>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEqualityComparer_1<UnityEngine::SceneManagement::Scene>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Linq::Set_1<UnityEngine::SceneManagement::Scene>.Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Linq::Set_1<UnityEngine::SceneManagement::Scene>::*)(UnityEngine::SceneManagement::Scene)>(&System::Linq::Set_1<UnityEngine::SceneManagement::Scene>::Add)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::Set_1<UnityEngine::SceneManagement::Scene>>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::SceneManagement::Scene>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Linq::Set_1<UnityEngine::SceneManagement::Scene>.Find
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Linq::Set_1<UnityEngine::SceneManagement::Scene>::*)(UnityEngine::SceneManagement::Scene, bool)>(&System::Linq::Set_1<UnityEngine::SceneManagement::Scene>::Find)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::Set_1<UnityEngine::SceneManagement::Scene>>::get(),
                            "Find",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::SceneManagement::Scene>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Linq::Set_1<UnityEngine::SceneManagement::Scene>.Resize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Linq::Set_1<UnityEngine::SceneManagement::Scene>::*)()>(&System::Linq::Set_1<UnityEngine::SceneManagement::Scene>::Resize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::Set_1<UnityEngine::SceneManagement::Scene>>::get(),
                            "Resize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Linq::Set_1<UnityEngine::SceneManagement::Scene>.InternalGetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Linq::Set_1<UnityEngine::SceneManagement::Scene>::*)(UnityEngine::SceneManagement::Scene)>(&System::Linq::Set_1<UnityEngine::SceneManagement::Scene>::InternalGetHashCode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::Set_1<UnityEngine::SceneManagement::Scene>>::get(),
                            "InternalGetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::SceneManagement::Scene>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Linq::Set_1<UnityEngine::SceneManagement::Scene>::__set_buckets(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> System::Linq::Set_1<UnityEngine::SceneManagement::Scene>::__get_buckets() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Linq::Set_1<UnityEngine::SceneManagement::Scene>::__set_slots(::ArrayW<System::Linq::System__Linq__Set_1__Slot<UnityEngine::SceneManagement::Scene>> value)  {
::cordl_internals::setInstanceField<::ArrayW<System::Linq::System__Linq__Set_1__Slot<UnityEngine::SceneManagement::Scene>>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<System::Linq::System__Linq__Set_1__Slot<UnityEngine::SceneManagement::Scene>>>(value));
}
constexpr ::ArrayW<System::Linq::System__Linq__Set_1__Slot<UnityEngine::SceneManagement::Scene>> System::Linq::Set_1<UnityEngine::SceneManagement::Scene>::__get_slots() const {
return ::cordl_internals::getInstanceField<::ArrayW<System::Linq::System__Linq__Set_1__Slot<UnityEngine::SceneManagement::Scene>>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Linq::Set_1<UnityEngine::SceneManagement::Scene>::__set_count(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Linq::Set_1<UnityEngine::SceneManagement::Scene>::__get_count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Linq::Set_1<UnityEngine::SceneManagement::Scene>::__set_freeList(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Linq::Set_1<UnityEngine::SceneManagement::Scene>::__get_freeList() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Linq::Set_1<UnityEngine::SceneManagement::Scene>::__set_comparer(System::Collections::Generic::IEqualityComparer_1<UnityEngine::SceneManagement::Scene> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IEqualityComparer_1<UnityEngine::SceneManagement::Scene>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::IEqualityComparer_1<UnityEngine::SceneManagement::Scene>>(value));
}
constexpr System::Collections::Generic::IEqualityComparer_1<UnityEngine::SceneManagement::Scene> System::Linq::Set_1<UnityEngine::SceneManagement::Scene>::__get_comparer() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IEqualityComparer_1<UnityEngine::SceneManagement::Scene>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "comparer", ty: "System::Collections::Generic::IEqualityComparer_1<UnityEngine::SceneManagement::Scene>", modifiers: "", def_value: None }]
 System::Linq::Set_1<UnityEngine::SceneManagement::Scene>::Set_1(System::Collections::Generic::IEqualityComparer_1<UnityEngine::SceneManagement::Scene> comparer)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Set_1>(comparer))) {}
 void System::Linq::Set_1<UnityEngine::SceneManagement::Scene>::_ctor(System::Collections::Generic::IEqualityComparer_1<UnityEngine::SceneManagement::Scene> comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::Set_1<UnityEngine::SceneManagement::Scene>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEqualityComparer_1<UnityEngine::SceneManagement::Scene>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, comparer);
}
 bool System::Linq::Set_1<UnityEngine::SceneManagement::Scene>::Add(UnityEngine::SceneManagement::Scene value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::Set_1<UnityEngine::SceneManagement::Scene>>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::SceneManagement::Scene>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool System::Linq::Set_1<UnityEngine::SceneManagement::Scene>::Find(UnityEngine::SceneManagement::Scene value, bool add)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::Set_1<UnityEngine::SceneManagement::Scene>>::get(),
                            "Find",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::SceneManagement::Scene>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, value, add);
}
 void System::Linq::Set_1<UnityEngine::SceneManagement::Scene>::Resize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::Set_1<UnityEngine::SceneManagement::Scene>>::get(),
                            "Resize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Linq::Set_1<UnityEngine::SceneManagement::Scene>::InternalGetHashCode(UnityEngine::SceneManagement::Scene value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::Set_1<UnityEngine::SceneManagement::Scene>>::get(),
                            "InternalGetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::SceneManagement::Scene>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, value);
}
