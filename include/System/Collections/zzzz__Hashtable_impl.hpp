#pragma once
#include "System/Collections/zzzz__Hashtable_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__IDeserializationCallback_def.hpp"
#include "System/Collections/zzzz__IEqualityComparer_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConditionalWeakTable_2_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/zzzz__IDictionaryEnumerator_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Collections/zzzz__DictionaryEntry_def.hpp"
// Ctor Parameters [CppParam { name: "key", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: Some("csnull") }, CppParam { name: "val", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: Some("csnull") }, CppParam { name: "hash_coll", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Collections::System__Collections__Hashtable__bucket::System__Collections__Hashtable__bucket(::bs_hook::Il2CppWrapperType key, ::bs_hook::Il2CppWrapperType val, int32_t hash_coll) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->val = val;
this->hash_coll = hash_coll;
}
constexpr void System::Collections::System__Collections__Hashtable__bucket::__set_key(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x0>(this->__instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType System::Collections::System__Collections__Hashtable__bucket::__get_key() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x0>(this->__instance);
}
constexpr void System::Collections::System__Collections__Hashtable__bucket::__set_val(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x8>(this->__instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType System::Collections::System__Collections__Hashtable__bucket::__get_val() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x8>(this->__instance);
}
constexpr void System::Collections::System__Collections__Hashtable__bucket::__set_hash_coll(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Collections::System__Collections__Hashtable__bucket::__get_hash_coll() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->__instance);
}
//  Writing Method size for method: System::Collections::System__Collections__Hashtable__KeyCollection._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::System__Collections__Hashtable__KeyCollection::*)(System::Collections::Hashtable)>(&System::Collections::System__Collections__Hashtable__KeyCollection::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x241b8a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__KeyCollection>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Hashtable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::System__Collections__Hashtable__KeyCollection.CopyTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::System__Collections__Hashtable__KeyCollection::*)(System::Array, int32_t)>(&System::Collections::System__Collections__Hashtable__KeyCollection::CopyTo)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x241cac4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::System__Collections__Hashtable__KeyCollection),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__KeyCollection>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::System__Collections__Hashtable__KeyCollection.GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator (System::Collections::System__Collections__Hashtable__KeyCollection::*)()>(&System::Collections::System__Collections__Hashtable__KeyCollection::GetEnumerator)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x241cc50;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::System__Collections__Hashtable__KeyCollection),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__KeyCollection>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::System__Collections__Hashtable__KeyCollection.get_IsSynchronized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::System__Collections__Hashtable__KeyCollection::*)()>(&System::Collections::System__Collections__Hashtable__KeyCollection::get_IsSynchronized)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x241ccb8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::System__Collections__Hashtable__KeyCollection),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__KeyCollection>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::System__Collections__Hashtable__KeyCollection.get_SyncRoot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Collections::System__Collections__Hashtable__KeyCollection::*)()>(&System::Collections::System__Collections__Hashtable__KeyCollection::get_SyncRoot)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x241ccdc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::System__Collections__Hashtable__KeyCollection),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__KeyCollection>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::System__Collections__Hashtable__KeyCollection.get_Count
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Collections::System__Collections__Hashtable__KeyCollection::*)()>(&System::Collections::System__Collections__Hashtable__KeyCollection::get_Count)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x241cd00;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::System__Collections__Hashtable__KeyCollection),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__KeyCollection>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::ICollection
constexpr  System::Collections::System__Collections__Hashtable__KeyCollection::operator System::Collections::ICollection() const noexcept {
return System::Collections::ICollection(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerable
constexpr  System::Collections::System__Collections__Hashtable__KeyCollection::operator System::Collections::IEnumerable() const noexcept {
return System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::System__Collections__Hashtable__KeyCollection::__set__hashtable(System::Collections::Hashtable value)  {
::cordl_internals::setInstanceField<System::Collections::Hashtable, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Hashtable>(value));
}
constexpr System::Collections::Hashtable System::Collections::System__Collections__Hashtable__KeyCollection::__get__hashtable() const {
return ::cordl_internals::getInstanceField<System::Collections::Hashtable, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "hashtable", ty: "System::Collections::Hashtable", modifiers: "", def_value: None }]
 System::Collections::System__Collections__Hashtable__KeyCollection::System__Collections__Hashtable__KeyCollection(System::Collections::Hashtable hashtable)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<System__Collections__Hashtable__KeyCollection>(hashtable))) {}
 void System::Collections::System__Collections__Hashtable__KeyCollection::_ctor(System::Collections::Hashtable hashtable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__KeyCollection>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Hashtable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, hashtable);
}
 void System::Collections::System__Collections__Hashtable__KeyCollection::CopyTo(System::Array array, int32_t arrayIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__KeyCollection>::get(),
                            "CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Array>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, array, arrayIndex);
}
 System::Collections::IEnumerator System::Collections::System__Collections__Hashtable__KeyCollection::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__KeyCollection>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Collections::System__Collections__Hashtable__KeyCollection::get_IsSynchronized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__KeyCollection>::get(),
                            "get_IsSynchronized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType System::Collections::System__Collections__Hashtable__KeyCollection::get_SyncRoot()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__KeyCollection>::get(),
                            "get_SyncRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Collections::System__Collections__Hashtable__KeyCollection::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__KeyCollection>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::Collections::System__Collections__Hashtable__ValueCollection._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::System__Collections__Hashtable__ValueCollection::*)(System::Collections::Hashtable)>(&System::Collections::System__Collections__Hashtable__ValueCollection::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x241b93c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__ValueCollection>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Hashtable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::System__Collections__Hashtable__ValueCollection.CopyTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::System__Collections__Hashtable__ValueCollection::*)(System::Array, int32_t)>(&System::Collections::System__Collections__Hashtable__ValueCollection::CopyTo)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x241cd1c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::System__Collections__Hashtable__ValueCollection),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__ValueCollection>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::System__Collections__Hashtable__ValueCollection.GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator (System::Collections::System__Collections__Hashtable__ValueCollection::*)()>(&System::Collections::System__Collections__Hashtable__ValueCollection::GetEnumerator)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x241cea8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::System__Collections__Hashtable__ValueCollection),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__ValueCollection>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::System__Collections__Hashtable__ValueCollection.get_IsSynchronized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::System__Collections__Hashtable__ValueCollection::*)()>(&System::Collections::System__Collections__Hashtable__ValueCollection::get_IsSynchronized)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x241cf10;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::System__Collections__Hashtable__ValueCollection),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__ValueCollection>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::System__Collections__Hashtable__ValueCollection.get_SyncRoot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Collections::System__Collections__Hashtable__ValueCollection::*)()>(&System::Collections::System__Collections__Hashtable__ValueCollection::get_SyncRoot)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x241cf34;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::System__Collections__Hashtable__ValueCollection),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__ValueCollection>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::System__Collections__Hashtable__ValueCollection.get_Count
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Collections::System__Collections__Hashtable__ValueCollection::*)()>(&System::Collections::System__Collections__Hashtable__ValueCollection::get_Count)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x241cf58;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::System__Collections__Hashtable__ValueCollection),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__ValueCollection>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::ICollection
constexpr  System::Collections::System__Collections__Hashtable__ValueCollection::operator System::Collections::ICollection() const noexcept {
return System::Collections::ICollection(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerable
constexpr  System::Collections::System__Collections__Hashtable__ValueCollection::operator System::Collections::IEnumerable() const noexcept {
return System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::System__Collections__Hashtable__ValueCollection::__set__hashtable(System::Collections::Hashtable value)  {
::cordl_internals::setInstanceField<System::Collections::Hashtable, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Hashtable>(value));
}
constexpr System::Collections::Hashtable System::Collections::System__Collections__Hashtable__ValueCollection::__get__hashtable() const {
return ::cordl_internals::getInstanceField<System::Collections::Hashtable, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "hashtable", ty: "System::Collections::Hashtable", modifiers: "", def_value: None }]
 System::Collections::System__Collections__Hashtable__ValueCollection::System__Collections__Hashtable__ValueCollection(System::Collections::Hashtable hashtable)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<System__Collections__Hashtable__ValueCollection>(hashtable))) {}
 void System::Collections::System__Collections__Hashtable__ValueCollection::_ctor(System::Collections::Hashtable hashtable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__ValueCollection>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Hashtable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, hashtable);
}
 void System::Collections::System__Collections__Hashtable__ValueCollection::CopyTo(System::Array array, int32_t arrayIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__ValueCollection>::get(),
                            "CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Array>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, array, arrayIndex);
}
 System::Collections::IEnumerator System::Collections::System__Collections__Hashtable__ValueCollection::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__ValueCollection>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Collections::System__Collections__Hashtable__ValueCollection::get_IsSynchronized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__ValueCollection>::get(),
                            "get_IsSynchronized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType System::Collections::System__Collections__Hashtable__ValueCollection::get_SyncRoot()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__ValueCollection>::get(),
                            "get_SyncRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Collections::System__Collections__Hashtable__ValueCollection::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__ValueCollection>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::Collections::Hashtable.get_SerializationInfoTable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::CompilerServices::ConditionalWeakTable_2<::bs_hook::Il2CppWrapperType,System::Runtime::Serialization::SerializationInfo> (*)()>(&System::Collections::Hashtable::get_SerializationInfoTable)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2419e38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                            "get_SerializationInfoTable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Hashtable._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Hashtable::*)(bool)>(&System::Collections::Hashtable::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2419e94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Hashtable._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Hashtable::*)()>(&System::Collections::Hashtable::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2419e9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Hashtable._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Hashtable::*)(int32_t)>(&System::Collections::Hashtable::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x241a154;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Hashtable._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Hashtable::*)(int32_t, float_t)>(&System::Collections::Hashtable::_ctor)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x2419ea8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Hashtable._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Hashtable::*)(int32_t, float_t, System::Collections::IEqualityComparer)>(&System::Collections::Hashtable::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x241a15c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Hashtable._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Hashtable::*)(System::Collections::IEqualityComparer)>(&System::Collections::Hashtable::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x241a180;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Hashtable._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Hashtable::*)(int32_t, System::Collections::IEqualityComparer)>(&System::Collections::Hashtable::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x241a1ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Hashtable._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Hashtable::*)(System::Collections::IDictionary)>(&System::Collections::Hashtable::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x241a1d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IDictionary>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Hashtable._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Hashtable::*)(System::Collections::IDictionary, float_t)>(&System::Collections::Hashtable::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x241a1e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IDictionary>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Hashtable._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Hashtable::*)(System::Collections::IDictionary, float_t, System::Collections::IEqualityComparer)>(&System::Collections::Hashtable::_ctor)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x241a1e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IDictionary>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Hashtable._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Hashtable::*)(System::Runtime::Serialization::SerializationInfo, System::Runtime::Serialization::StreamingContext)>(&System::Collections::Hashtable::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x241a50c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Hashtable.InitHash
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (System::Collections::Hashtable::*)(::bs_hook::Il2CppWrapperType, int32_t, ByRef<uint32_t>, ByRef<uint32_t>)>(&System::Collections::Hashtable::InitHash)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x241a574;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                            "InitHash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Hashtable.Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Hashtable::*)(::bs_hook::Il2CppWrapperType, ::bs_hook::Il2CppWrapperType)>(&System::Collections::Hashtable::Add)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x241a5c8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::Hashtable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Hashtable.Clear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Hashtable::*)()>(&System::Collections::Hashtable::Clear)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x241a990;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::Hashtable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                                  24
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Hashtable.Clone
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Collections::Hashtable::*)()>(&System::Collections::Hashtable::Clone)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x241aa5c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::Hashtable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                                  25
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Hashtable.Contains
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::Hashtable::*)(::bs_hook::Il2CppWrapperType)>(&System::Collections::Hashtable::Contains)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x241ab70;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::Hashtable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                                  26
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Hashtable.ContainsKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::Hashtable::*)(::bs_hook::Il2CppWrapperType)>(&System::Collections::Hashtable::ContainsKey)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x241ab80;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::Hashtable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                                  27
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Hashtable.CopyKeys
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Hashtable::*)(System::Array, int32_t)>(&System::Collections::Hashtable::CopyKeys)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x241ace8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                            "CopyKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Array>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Hashtable.CopyEntries
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Hashtable::*)(System::Array, int32_t)>(&System::Collections::Hashtable::CopyEntries)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x241ad8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                            "CopyEntries",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Array>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Hashtable.CopyTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Hashtable::*)(System::Array, int32_t)>(&System::Collections::Hashtable::CopyTo)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x241ae80;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::Hashtable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Hashtable.CopyValues
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Hashtable::*)(System::Array, int32_t)>(&System::Collections::Hashtable::CopyValues)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x241b030;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                            "CopyValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Array>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Hashtable.get_Item
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Collections::Hashtable::*)(::bs_hook::Il2CppWrapperType)>(&System::Collections::Hashtable::get_Item)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x241b0e0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::Hashtable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                                  29
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Hashtable.set_Item
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Hashtable::*)(::bs_hook::Il2CppWrapperType, ::bs_hook::Il2CppWrapperType)>(&System::Collections::Hashtable::set_Item)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x241b2c8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::Hashtable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                                  30
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Hashtable.expand
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Hashtable::*)()>(&System::Collections::Hashtable::expand)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x241b2d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                            "expand",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Hashtable.rehash
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Hashtable::*)()>(&System::Collections::Hashtable::rehash)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x241b460;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                            "rehash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Hashtable.UpdateVersion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Hashtable::*)()>(&System::Collections::Hashtable::UpdateVersion)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x241aa30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                            "UpdateVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Hashtable.rehash
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Hashtable::*)(int32_t)>(&System::Collections::Hashtable::rehash)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x241b33c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                            "rehash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Hashtable.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator (System::Collections::Hashtable::*)()>(&System::Collections::Hashtable::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x241b52c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Hashtable.GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IDictionaryEnumerator (System::Collections::Hashtable::*)()>(&System::Collections::Hashtable::GetEnumerator)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x241b5e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::Hashtable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                                  31
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Hashtable.GetHash
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Collections::Hashtable::*)(::bs_hook::Il2CppWrapperType)>(&System::Collections::Hashtable::GetHash)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x241b64c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::Hashtable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                                  32
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Hashtable.get_IsReadOnly
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::Hashtable::*)()>(&System::Collections::Hashtable::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x241b714;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::Hashtable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                                  33
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Hashtable.get_IsFixedSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::Hashtable::*)()>(&System::Collections::Hashtable::get_IsFixedSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x241b71c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::Hashtable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                                  34
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Hashtable.get_IsSynchronized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::Hashtable::*)()>(&System::Collections::Hashtable::get_IsSynchronized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x241b724;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::Hashtable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                                  35
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Hashtable.KeyEquals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::Hashtable::*)(::bs_hook::Il2CppWrapperType, ::bs_hook::Il2CppWrapperType)>(&System::Collections::Hashtable::KeyEquals)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x241b72c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::Hashtable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                                  36
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Hashtable.get_Keys
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::ICollection (System::Collections::Hashtable::*)()>(&System::Collections::Hashtable::get_Keys)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x241b834;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::Hashtable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                                  37
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Hashtable.get_Values
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::ICollection (System::Collections::Hashtable::*)()>(&System::Collections::Hashtable::get_Values)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x241b8cc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::Hashtable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                                  38
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Hashtable.Insert
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Hashtable::*)(::bs_hook::Il2CppWrapperType, ::bs_hook::Il2CppWrapperType, bool)>(&System::Collections::Hashtable::Insert)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x241a5d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                            "Insert",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Hashtable.putEntry
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Hashtable::*)(::ArrayW<System::Collections::System__Collections__Hashtable__bucket>, ::bs_hook::Il2CppWrapperType, ::bs_hook::Il2CppWrapperType, int32_t)>(&System::Collections::Hashtable::putEntry)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x241b47c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                            "putEntry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Collections::System__Collections__Hashtable__bucket>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Hashtable.Remove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Hashtable::*)(::bs_hook::Il2CppWrapperType)>(&System::Collections::Hashtable::Remove)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x241b964;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::Hashtable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                                  39
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Hashtable.get_SyncRoot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Collections::Hashtable::*)()>(&System::Collections::Hashtable::get_SyncRoot)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x241bb4c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::Hashtable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                                  40
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Hashtable.get_Count
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Collections::Hashtable::*)()>(&System::Collections::Hashtable::get_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x241bbc4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::Hashtable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                                  41
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Hashtable.Synchronized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Hashtable (*)(System::Collections::Hashtable)>(&System::Collections::Hashtable::Synchronized)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x241bbcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                            "Synchronized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Hashtable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Hashtable.GetObjectData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Hashtable::*)(System::Runtime::Serialization::SerializationInfo, System::Runtime::Serialization::StreamingContext)>(&System::Collections::Hashtable::GetObjectData)> {
  constexpr static std::size_t size = 0x53c;
  constexpr static std::size_t addrs = 0x241bca8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::Hashtable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                                  42
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Hashtable.OnDeserialization
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Hashtable::*)(::bs_hook::Il2CppWrapperType)>(&System::Collections::Hashtable::OnDeserialization)> {
  constexpr static std::size_t size = 0x864;
  constexpr static std::size_t addrs = 0x241c1e4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::Hashtable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                                  43
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::IDictionary
constexpr  System::Collections::Hashtable::operator System::Collections::IDictionary() const noexcept {
return System::Collections::IDictionary(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::ICollection
constexpr  System::Collections::Hashtable::operator System::Collections::ICollection() const noexcept {
return System::Collections::ICollection(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerable
constexpr  System::Collections::Hashtable::operator System::Collections::IEnumerable() const noexcept {
return System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr  System::Collections::Hashtable::operator System::Runtime::Serialization::ISerializable() const noexcept {
return System::Runtime::Serialization::ISerializable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Runtime::Serialization::IDeserializationCallback
constexpr  System::Collections::Hashtable::operator System::Runtime::Serialization::IDeserializationCallback() const noexcept {
return System::Runtime::Serialization::IDeserializationCallback(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::ICloneable
constexpr  System::Collections::Hashtable::operator System::ICloneable() const noexcept {
return System::ICloneable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Hashtable::__set__buckets(::ArrayW<System::Collections::System__Collections__Hashtable__bucket> value)  {
::cordl_internals::setInstanceField<::ArrayW<System::Collections::System__Collections__Hashtable__bucket>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<System::Collections::System__Collections__Hashtable__bucket>>(value));
}
constexpr ::ArrayW<System::Collections::System__Collections__Hashtable__bucket> System::Collections::Hashtable::__get__buckets() const {
return ::cordl_internals::getInstanceField<::ArrayW<System::Collections::System__Collections__Hashtable__bucket>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Hashtable::__set__count(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Collections::Hashtable::__get__count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Hashtable::__set__occupancy(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Collections::Hashtable::__get__occupancy() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Hashtable::__set__loadsize(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Collections::Hashtable::__get__loadsize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Hashtable::__set__loadFactor(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t System::Collections::Hashtable::__get__loadFactor() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Hashtable::__set__version(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Collections::Hashtable::__get__version() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Hashtable::__set__isWriterInProgress(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Collections::Hashtable::__get__isWriterInProgress() const {
return ::cordl_internals::getInstanceField<bool, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Hashtable::__set__keys(System::Collections::ICollection value)  {
::cordl_internals::setInstanceField<System::Collections::ICollection, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::ICollection>(value));
}
constexpr System::Collections::ICollection System::Collections::Hashtable::__get__keys() const {
return ::cordl_internals::getInstanceField<System::Collections::ICollection, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Hashtable::__set__values(System::Collections::ICollection value)  {
::cordl_internals::setInstanceField<System::Collections::ICollection, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::ICollection>(value));
}
constexpr System::Collections::ICollection System::Collections::Hashtable::__get__values() const {
return ::cordl_internals::getInstanceField<System::Collections::ICollection, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Hashtable::__set__keycomparer(System::Collections::IEqualityComparer value)  {
::cordl_internals::setInstanceField<System::Collections::IEqualityComparer, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::IEqualityComparer>(value));
}
constexpr System::Collections::IEqualityComparer System::Collections::Hashtable::__get__keycomparer() const {
return ::cordl_internals::getInstanceField<System::Collections::IEqualityComparer, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Hashtable::__set__syncRoot(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType System::Collections::Hashtable::__get__syncRoot() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void System::Collections::Hashtable::__set_s_serializationInfoTable(System::Runtime::CompilerServices::ConditionalWeakTable_2<::bs_hook::Il2CppWrapperType,System::Runtime::Serialization::SerializationInfo> value)  {
::cordl_internals::setStaticField<System::Runtime::CompilerServices::ConditionalWeakTable_2<::bs_hook::Il2CppWrapperType,System::Runtime::Serialization::SerializationInfo>, "s_serializationInfoTable", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get>(std::forward<System::Runtime::CompilerServices::ConditionalWeakTable_2<::bs_hook::Il2CppWrapperType,System::Runtime::Serialization::SerializationInfo>>(value));
}
 System::Runtime::CompilerServices::ConditionalWeakTable_2<::bs_hook::Il2CppWrapperType,System::Runtime::Serialization::SerializationInfo> System::Collections::Hashtable::__get_s_serializationInfoTable()  {
return ::cordl_internals::getStaticField<System::Runtime::CompilerServices::ConditionalWeakTable_2<::bs_hook::Il2CppWrapperType,System::Runtime::Serialization::SerializationInfo>, "s_serializationInfoTable", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get>();
}
 System::Runtime::CompilerServices::ConditionalWeakTable_2<::bs_hook::Il2CppWrapperType,System::Runtime::Serialization::SerializationInfo> System::Collections::Hashtable::get_SerializationInfoTable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                            "get_SerializationInfoTable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::CompilerServices::ConditionalWeakTable_2<::bs_hook::Il2CppWrapperType,System::Runtime::Serialization::SerializationInfo>, false>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "trash", ty: "bool", modifiers: "", def_value: None }]
 System::Collections::Hashtable::Hashtable(bool trash)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Hashtable>(trash))) {}
 void System::Collections::Hashtable::_ctor(bool trash)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, trash);
}
// Ctor Parameters []
 System::Collections::Hashtable::Hashtable()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Hashtable>())) {}
 void System::Collections::Hashtable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "capacity", ty: "int32_t", modifiers: "", def_value: None }]
 System::Collections::Hashtable::Hashtable(int32_t capacity)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Hashtable>(capacity))) {}
 void System::Collections::Hashtable::_ctor(int32_t capacity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, capacity);
}
// Ctor Parameters [CppParam { name: "capacity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "loadFactor", ty: "float_t", modifiers: "", def_value: None }]
 System::Collections::Hashtable::Hashtable(int32_t capacity, float_t loadFactor)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Hashtable>(capacity, loadFactor))) {}
 void System::Collections::Hashtable::_ctor(int32_t capacity, float_t loadFactor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, capacity, loadFactor);
}
// Ctor Parameters [CppParam { name: "capacity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "loadFactor", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "equalityComparer", ty: "System::Collections::IEqualityComparer", modifiers: "", def_value: None }]
 System::Collections::Hashtable::Hashtable(int32_t capacity, float_t loadFactor, System::Collections::IEqualityComparer equalityComparer)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Hashtable>(capacity, loadFactor, equalityComparer))) {}
 void System::Collections::Hashtable::_ctor(int32_t capacity, float_t loadFactor, System::Collections::IEqualityComparer equalityComparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, capacity, loadFactor, equalityComparer);
}
// Ctor Parameters [CppParam { name: "equalityComparer", ty: "System::Collections::IEqualityComparer", modifiers: "", def_value: None }]
 System::Collections::Hashtable::Hashtable(System::Collections::IEqualityComparer equalityComparer)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Hashtable>(equalityComparer))) {}
 void System::Collections::Hashtable::_ctor(System::Collections::IEqualityComparer equalityComparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, equalityComparer);
}
// Ctor Parameters [CppParam { name: "capacity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "equalityComparer", ty: "System::Collections::IEqualityComparer", modifiers: "", def_value: None }]
 System::Collections::Hashtable::Hashtable(int32_t capacity, System::Collections::IEqualityComparer equalityComparer)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Hashtable>(capacity, equalityComparer))) {}
 void System::Collections::Hashtable::_ctor(int32_t capacity, System::Collections::IEqualityComparer equalityComparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, capacity, equalityComparer);
}
// Ctor Parameters [CppParam { name: "d", ty: "System::Collections::IDictionary", modifiers: "", def_value: None }]
 System::Collections::Hashtable::Hashtable(System::Collections::IDictionary d)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Hashtable>(d))) {}
 void System::Collections::Hashtable::_ctor(System::Collections::IDictionary d)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IDictionary>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, d);
}
// Ctor Parameters [CppParam { name: "d", ty: "System::Collections::IDictionary", modifiers: "", def_value: None }, CppParam { name: "loadFactor", ty: "float_t", modifiers: "", def_value: None }]
 System::Collections::Hashtable::Hashtable(System::Collections::IDictionary d, float_t loadFactor)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Hashtable>(d, loadFactor))) {}
 void System::Collections::Hashtable::_ctor(System::Collections::IDictionary d, float_t loadFactor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IDictionary>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, d, loadFactor);
}
// Ctor Parameters [CppParam { name: "d", ty: "System::Collections::IDictionary", modifiers: "", def_value: None }, CppParam { name: "loadFactor", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "equalityComparer", ty: "System::Collections::IEqualityComparer", modifiers: "", def_value: None }]
 System::Collections::Hashtable::Hashtable(System::Collections::IDictionary d, float_t loadFactor, System::Collections::IEqualityComparer equalityComparer)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Hashtable>(d, loadFactor, equalityComparer))) {}
 void System::Collections::Hashtable::_ctor(System::Collections::IDictionary d, float_t loadFactor, System::Collections::IEqualityComparer equalityComparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IDictionary>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, d, loadFactor, equalityComparer);
}
// Ctor Parameters [CppParam { name: "info", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
 System::Collections::Hashtable::Hashtable(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Hashtable>(info, context))) {}
 void System::Collections::Hashtable::_ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, info, context);
}
 uint32_t System::Collections::Hashtable::InitHash(::bs_hook::Il2CppWrapperType key, int32_t hashsize, ByRef<uint32_t> seed, ByRef<uint32_t> incr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                            "InitHash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method, key, hashsize, seed, incr);
}
 void System::Collections::Hashtable::Add(::bs_hook::Il2CppWrapperType key, ::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, key, value);
}
 void System::Collections::Hashtable::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType System::Collections::Hashtable::Clone()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                            "Clone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Collections::Hashtable::Contains(::bs_hook::Il2CppWrapperType key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                            "Contains",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, key);
}
 bool System::Collections::Hashtable::ContainsKey(::bs_hook::Il2CppWrapperType key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                            "ContainsKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, key);
}
 void System::Collections::Hashtable::CopyKeys(System::Array array, int32_t arrayIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                            "CopyKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Array>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, array, arrayIndex);
}
 void System::Collections::Hashtable::CopyEntries(System::Array array, int32_t arrayIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                            "CopyEntries",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Array>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, array, arrayIndex);
}
 void System::Collections::Hashtable::CopyTo(System::Array array, int32_t arrayIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                            "CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Array>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, array, arrayIndex);
}
 void System::Collections::Hashtable::CopyValues(System::Array array, int32_t arrayIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                            "CopyValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Array>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, array, arrayIndex);
}
 ::bs_hook::Il2CppWrapperType System::Collections::Hashtable::get_Item(::bs_hook::Il2CppWrapperType key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, key);
}
 void System::Collections::Hashtable::set_Item(::bs_hook::Il2CppWrapperType key, ::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                            "set_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, key, value);
}
 void System::Collections::Hashtable::expand()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                            "expand",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Collections::Hashtable::rehash()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                            "rehash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Collections::Hashtable::UpdateVersion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                            "UpdateVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Collections::Hashtable::rehash(int32_t newsize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                            "rehash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, newsize);
}
 System::Collections::IEnumerator System::Collections::Hashtable::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IDictionaryEnumerator System::Collections::Hashtable::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IDictionaryEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Collections::Hashtable::GetHash(::bs_hook::Il2CppWrapperType key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                            "GetHash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, key);
}
 bool System::Collections::Hashtable::get_IsReadOnly()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                            "get_IsReadOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Collections::Hashtable::get_IsFixedSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                            "get_IsFixedSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Collections::Hashtable::get_IsSynchronized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                            "get_IsSynchronized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Collections::Hashtable::KeyEquals(::bs_hook::Il2CppWrapperType item, ::bs_hook::Il2CppWrapperType key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                            "KeyEquals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, item, key);
}
 System::Collections::ICollection System::Collections::Hashtable::get_Keys()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                            "get_Keys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::ICollection, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::ICollection System::Collections::Hashtable::get_Values()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                            "get_Values",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::ICollection, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Collections::Hashtable::Insert(::bs_hook::Il2CppWrapperType key, ::bs_hook::Il2CppWrapperType nvalue, bool add)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                            "Insert",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, key, nvalue, add);
}
 void System::Collections::Hashtable::putEntry(::ArrayW<System::Collections::System__Collections__Hashtable__bucket> newBuckets, ::bs_hook::Il2CppWrapperType key, ::bs_hook::Il2CppWrapperType nvalue, int32_t hashcode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                            "putEntry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Collections::System__Collections__Hashtable__bucket>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, newBuckets, key, nvalue, hashcode);
}
 void System::Collections::Hashtable::Remove(::bs_hook::Il2CppWrapperType key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, key);
}
 ::bs_hook::Il2CppWrapperType System::Collections::Hashtable::get_SyncRoot()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                            "get_SyncRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Collections::Hashtable::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Hashtable System::Collections::Hashtable::Synchronized(System::Collections::Hashtable table)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                            "Synchronized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Hashtable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Hashtable, false>(nullptr, ___internal_method, table);
}
 void System::Collections::Hashtable::GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                            "GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, info, context);
}
 void System::Collections::Hashtable::OnDeserialization(::bs_hook::Il2CppWrapperType sender)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Hashtable>::get(),
                            "OnDeserialization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sender);
}
//  Writing Method size for method: System::Collections::System__Collections__Hashtable__SyncHashtable._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::System__Collections__Hashtable__SyncHashtable::*)(System::Collections::Hashtable)>(&System::Collections::System__Collections__Hashtable__SyncHashtable::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x241bc80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__SyncHashtable>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Hashtable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::System__Collections__Hashtable__SyncHashtable._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::System__Collections__Hashtable__SyncHashtable::*)(System::Runtime::Serialization::SerializationInfo, System::Runtime::Serialization::StreamingContext)>(&System::Collections::System__Collections__Hashtable__SyncHashtable::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x241cf74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__SyncHashtable>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::System__Collections__Hashtable__SyncHashtable.GetObjectData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::System__Collections__Hashtable__SyncHashtable::*)(System::Runtime::Serialization::SerializationInfo, System::Runtime::Serialization::StreamingContext)>(&System::Collections::System__Collections__Hashtable__SyncHashtable::GetObjectData)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x241cfb8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::System__Collections__Hashtable__SyncHashtable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__SyncHashtable>::get(),
                                  42
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::System__Collections__Hashtable__SyncHashtable.get_Count
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Collections::System__Collections__Hashtable__SyncHashtable::*)()>(&System::Collections::System__Collections__Hashtable__SyncHashtable::get_Count)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x241cff8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::System__Collections__Hashtable__SyncHashtable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__SyncHashtable>::get(),
                                  41
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::System__Collections__Hashtable__SyncHashtable.get_IsReadOnly
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::System__Collections__Hashtable__SyncHashtable::*)()>(&System::Collections::System__Collections__Hashtable__SyncHashtable::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x241d01c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::System__Collections__Hashtable__SyncHashtable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__SyncHashtable>::get(),
                                  33
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::System__Collections__Hashtable__SyncHashtable.get_IsFixedSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::System__Collections__Hashtable__SyncHashtable::*)()>(&System::Collections::System__Collections__Hashtable__SyncHashtable::get_IsFixedSize)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x241d040;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::System__Collections__Hashtable__SyncHashtable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__SyncHashtable>::get(),
                                  34
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::System__Collections__Hashtable__SyncHashtable.get_IsSynchronized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::System__Collections__Hashtable__SyncHashtable::*)()>(&System::Collections::System__Collections__Hashtable__SyncHashtable::get_IsSynchronized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x241d064;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::System__Collections__Hashtable__SyncHashtable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__SyncHashtable>::get(),
                                  35
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::System__Collections__Hashtable__SyncHashtable.get_Item
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Collections::System__Collections__Hashtable__SyncHashtable::*)(::bs_hook::Il2CppWrapperType)>(&System::Collections::System__Collections__Hashtable__SyncHashtable::get_Item)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x241d06c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::System__Collections__Hashtable__SyncHashtable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__SyncHashtable>::get(),
                                  29
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::System__Collections__Hashtable__SyncHashtable.set_Item
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::System__Collections__Hashtable__SyncHashtable::*)(::bs_hook::Il2CppWrapperType, ::bs_hook::Il2CppWrapperType)>(&System::Collections::System__Collections__Hashtable__SyncHashtable::set_Item)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x241d090;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::System__Collections__Hashtable__SyncHashtable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__SyncHashtable>::get(),
                                  30
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::System__Collections__Hashtable__SyncHashtable.get_SyncRoot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Collections::System__Collections__Hashtable__SyncHashtable::*)()>(&System::Collections::System__Collections__Hashtable__SyncHashtable::get_SyncRoot)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x241d190;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::System__Collections__Hashtable__SyncHashtable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__SyncHashtable>::get(),
                                  40
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::System__Collections__Hashtable__SyncHashtable.Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::System__Collections__Hashtable__SyncHashtable::*)(::bs_hook::Il2CppWrapperType, ::bs_hook::Il2CppWrapperType)>(&System::Collections::System__Collections__Hashtable__SyncHashtable::Add)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x241d1b4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::System__Collections__Hashtable__SyncHashtable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__SyncHashtable>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::System__Collections__Hashtable__SyncHashtable.Clear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::System__Collections__Hashtable__SyncHashtable::*)()>(&System::Collections::System__Collections__Hashtable__SyncHashtable::Clear)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x241d2b4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::System__Collections__Hashtable__SyncHashtable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__SyncHashtable>::get(),
                                  24
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::System__Collections__Hashtable__SyncHashtable.Contains
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::System__Collections__Hashtable__SyncHashtable::*)(::bs_hook::Il2CppWrapperType)>(&System::Collections::System__Collections__Hashtable__SyncHashtable::Contains)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x241d3a4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::System__Collections__Hashtable__SyncHashtable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__SyncHashtable>::get(),
                                  26
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::System__Collections__Hashtable__SyncHashtable.ContainsKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::System__Collections__Hashtable__SyncHashtable::*)(::bs_hook::Il2CppWrapperType)>(&System::Collections::System__Collections__Hashtable__SyncHashtable::ContainsKey)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x241d3c8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::System__Collections__Hashtable__SyncHashtable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__SyncHashtable>::get(),
                                  27
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::System__Collections__Hashtable__SyncHashtable.CopyTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::System__Collections__Hashtable__SyncHashtable::*)(System::Array, int32_t)>(&System::Collections::System__Collections__Hashtable__SyncHashtable::CopyTo)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x241d458;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::System__Collections__Hashtable__SyncHashtable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__SyncHashtable>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::System__Collections__Hashtable__SyncHashtable.Clone
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Collections::System__Collections__Hashtable__SyncHashtable::*)()>(&System::Collections::System__Collections__Hashtable__SyncHashtable::Clone)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x241d558;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::System__Collections__Hashtable__SyncHashtable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__SyncHashtable>::get(),
                                  25
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::System__Collections__Hashtable__SyncHashtable.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator (System::Collections::System__Collections__Hashtable__SyncHashtable::*)()>(&System::Collections::System__Collections__Hashtable__SyncHashtable::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x241d6bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__SyncHashtable>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::System__Collections__Hashtable__SyncHashtable.GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IDictionaryEnumerator (System::Collections::System__Collections__Hashtable__SyncHashtable::*)()>(&System::Collections::System__Collections__Hashtable__SyncHashtable::GetEnumerator)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x241d6e0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::System__Collections__Hashtable__SyncHashtable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__SyncHashtable>::get(),
                                  31
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::System__Collections__Hashtable__SyncHashtable.get_Keys
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::ICollection (System::Collections::System__Collections__Hashtable__SyncHashtable::*)()>(&System::Collections::System__Collections__Hashtable__SyncHashtable::get_Keys)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x241d704;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::System__Collections__Hashtable__SyncHashtable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__SyncHashtable>::get(),
                                  37
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::System__Collections__Hashtable__SyncHashtable.get_Values
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::ICollection (System::Collections::System__Collections__Hashtable__SyncHashtable::*)()>(&System::Collections::System__Collections__Hashtable__SyncHashtable::get_Values)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x241d804;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::System__Collections__Hashtable__SyncHashtable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__SyncHashtable>::get(),
                                  38
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::System__Collections__Hashtable__SyncHashtable.Remove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::System__Collections__Hashtable__SyncHashtable::*)(::bs_hook::Il2CppWrapperType)>(&System::Collections::System__Collections__Hashtable__SyncHashtable::Remove)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x241d904;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::System__Collections__Hashtable__SyncHashtable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__SyncHashtable>::get(),
                                  39
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::System__Collections__Hashtable__SyncHashtable.OnDeserialization
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::System__Collections__Hashtable__SyncHashtable::*)(::bs_hook::Il2CppWrapperType)>(&System::Collections::System__Collections__Hashtable__SyncHashtable::OnDeserialization)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x241d9fc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::System__Collections__Hashtable__SyncHashtable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__SyncHashtable>::get(),
                                  43
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::IEnumerable
constexpr  System::Collections::System__Collections__Hashtable__SyncHashtable::operator System::Collections::IEnumerable() const noexcept {
return System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::System__Collections__Hashtable__SyncHashtable::__set__table(System::Collections::Hashtable value)  {
::cordl_internals::setInstanceField<System::Collections::Hashtable, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Hashtable>(value));
}
constexpr System::Collections::Hashtable System::Collections::System__Collections__Hashtable__SyncHashtable::__get__table() const {
return ::cordl_internals::getInstanceField<System::Collections::Hashtable, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "table", ty: "System::Collections::Hashtable", modifiers: "", def_value: None }]
 System::Collections::System__Collections__Hashtable__SyncHashtable::System__Collections__Hashtable__SyncHashtable(System::Collections::Hashtable table)  : System::Collections::Hashtable(THROW_UNLESS(::il2cpp_utils::New<System__Collections__Hashtable__SyncHashtable>(table))) {}
 void System::Collections::System__Collections__Hashtable__SyncHashtable::_ctor(System::Collections::Hashtable table)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__SyncHashtable>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Hashtable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, table);
}
// Ctor Parameters [CppParam { name: "info", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
 System::Collections::System__Collections__Hashtable__SyncHashtable::System__Collections__Hashtable__SyncHashtable(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context)  : System::Collections::Hashtable(THROW_UNLESS(::il2cpp_utils::New<System__Collections__Hashtable__SyncHashtable>(info, context))) {}
 void System::Collections::System__Collections__Hashtable__SyncHashtable::_ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__SyncHashtable>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, info, context);
}
 void System::Collections::System__Collections__Hashtable__SyncHashtable::GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__SyncHashtable>::get(),
                            "GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, info, context);
}
 int32_t System::Collections::System__Collections__Hashtable__SyncHashtable::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__SyncHashtable>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Collections::System__Collections__Hashtable__SyncHashtable::get_IsReadOnly()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__SyncHashtable>::get(),
                            "get_IsReadOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Collections::System__Collections__Hashtable__SyncHashtable::get_IsFixedSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__SyncHashtable>::get(),
                            "get_IsFixedSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Collections::System__Collections__Hashtable__SyncHashtable::get_IsSynchronized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__SyncHashtable>::get(),
                            "get_IsSynchronized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType System::Collections::System__Collections__Hashtable__SyncHashtable::get_Item(::bs_hook::Il2CppWrapperType key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__SyncHashtable>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, key);
}
 void System::Collections::System__Collections__Hashtable__SyncHashtable::set_Item(::bs_hook::Il2CppWrapperType key, ::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__SyncHashtable>::get(),
                            "set_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, key, value);
}
 ::bs_hook::Il2CppWrapperType System::Collections::System__Collections__Hashtable__SyncHashtable::get_SyncRoot()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__SyncHashtable>::get(),
                            "get_SyncRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Collections::System__Collections__Hashtable__SyncHashtable::Add(::bs_hook::Il2CppWrapperType key, ::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__SyncHashtable>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, key, value);
}
 void System::Collections::System__Collections__Hashtable__SyncHashtable::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__SyncHashtable>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Collections::System__Collections__Hashtable__SyncHashtable::Contains(::bs_hook::Il2CppWrapperType key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__SyncHashtable>::get(),
                            "Contains",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, key);
}
 bool System::Collections::System__Collections__Hashtable__SyncHashtable::ContainsKey(::bs_hook::Il2CppWrapperType key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__SyncHashtable>::get(),
                            "ContainsKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, key);
}
 void System::Collections::System__Collections__Hashtable__SyncHashtable::CopyTo(System::Array array, int32_t arrayIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__SyncHashtable>::get(),
                            "CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Array>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, array, arrayIndex);
}
 ::bs_hook::Il2CppWrapperType System::Collections::System__Collections__Hashtable__SyncHashtable::Clone()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__SyncHashtable>::get(),
                            "Clone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IEnumerator System::Collections::System__Collections__Hashtable__SyncHashtable::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__SyncHashtable>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IDictionaryEnumerator System::Collections::System__Collections__Hashtable__SyncHashtable::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__SyncHashtable>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IDictionaryEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::ICollection System::Collections::System__Collections__Hashtable__SyncHashtable::get_Keys()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__SyncHashtable>::get(),
                            "get_Keys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::ICollection, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::ICollection System::Collections::System__Collections__Hashtable__SyncHashtable::get_Values()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__SyncHashtable>::get(),
                            "get_Values",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::ICollection, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Collections::System__Collections__Hashtable__SyncHashtable::Remove(::bs_hook::Il2CppWrapperType key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__SyncHashtable>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, key);
}
 void System::Collections::System__Collections__Hashtable__SyncHashtable::OnDeserialization(::bs_hook::Il2CppWrapperType sender)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__SyncHashtable>::get(),
                            "OnDeserialization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sender);
}
//  Writing Method size for method: System::Collections::System__Collections__Hashtable__HashtableEnumerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::System__Collections__Hashtable__HashtableEnumerator::*)(System::Collections::Hashtable, int32_t)>(&System::Collections::System__Collections__Hashtable__HashtableEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x241b590;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__HashtableEnumerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Hashtable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::System__Collections__Hashtable__HashtableEnumerator.Clone
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Collections::System__Collections__Hashtable__HashtableEnumerator::*)()>(&System::Collections::System__Collections__Hashtable__HashtableEnumerator::Clone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x241da00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__HashtableEnumerator>::get(),
                            "Clone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::System__Collections__Hashtable__HashtableEnumerator.get_Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Collections::System__Collections__Hashtable__HashtableEnumerator::*)()>(&System::Collections::System__Collections__Hashtable__HashtableEnumerator::get_Key)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x241da08;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::System__Collections__Hashtable__HashtableEnumerator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__HashtableEnumerator>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::System__Collections__Hashtable__HashtableEnumerator.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::System__Collections__Hashtable__HashtableEnumerator::*)()>(&System::Collections::System__Collections__Hashtable__HashtableEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x241da6c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::System__Collections__Hashtable__HashtableEnumerator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__HashtableEnumerator>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::System__Collections__Hashtable__HashtableEnumerator.get_Entry
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::DictionaryEntry (System::Collections::System__Collections__Hashtable__HashtableEnumerator::*)()>(&System::Collections::System__Collections__Hashtable__HashtableEnumerator::get_Entry)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x241dba0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::System__Collections__Hashtable__HashtableEnumerator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__HashtableEnumerator>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::System__Collections__Hashtable__HashtableEnumerator.get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Collections::System__Collections__Hashtable__HashtableEnumerator::*)()>(&System::Collections::System__Collections__Hashtable__HashtableEnumerator::get_Current)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x241dc08;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::System__Collections__Hashtable__HashtableEnumerator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__HashtableEnumerator>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::System__Collections__Hashtable__HashtableEnumerator.get_Value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Collections::System__Collections__Hashtable__HashtableEnumerator::*)()>(&System::Collections::System__Collections__Hashtable__HashtableEnumerator::get_Value)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x241dcdc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::System__Collections__Hashtable__HashtableEnumerator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__HashtableEnumerator>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::System__Collections__Hashtable__HashtableEnumerator.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::System__Collections__Hashtable__HashtableEnumerator::*)()>(&System::Collections::System__Collections__Hashtable__HashtableEnumerator::Reset)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x241dd40;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::System__Collections__Hashtable__HashtableEnumerator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__HashtableEnumerator>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::IDictionaryEnumerator
constexpr  System::Collections::System__Collections__Hashtable__HashtableEnumerator::operator System::Collections::IDictionaryEnumerator() const noexcept {
return System::Collections::IDictionaryEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerator
constexpr  System::Collections::System__Collections__Hashtable__HashtableEnumerator::operator System::Collections::IEnumerator() const noexcept {
return System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::ICloneable
constexpr  System::Collections::System__Collections__Hashtable__HashtableEnumerator::operator System::ICloneable() const noexcept {
return System::ICloneable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::System__Collections__Hashtable__HashtableEnumerator::__set__hashtable(System::Collections::Hashtable value)  {
::cordl_internals::setInstanceField<System::Collections::Hashtable, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Hashtable>(value));
}
constexpr System::Collections::Hashtable System::Collections::System__Collections__Hashtable__HashtableEnumerator::__get__hashtable() const {
return ::cordl_internals::getInstanceField<System::Collections::Hashtable, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::System__Collections__Hashtable__HashtableEnumerator::__set__bucket(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Collections::System__Collections__Hashtable__HashtableEnumerator::__get__bucket() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::System__Collections__Hashtable__HashtableEnumerator::__set__version(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Collections::System__Collections__Hashtable__HashtableEnumerator::__get__version() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::System__Collections__Hashtable__HashtableEnumerator::__set__current(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Collections::System__Collections__Hashtable__HashtableEnumerator::__get__current() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::System__Collections__Hashtable__HashtableEnumerator::__set__getObjectRetType(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Collections::System__Collections__Hashtable__HashtableEnumerator::__get__getObjectRetType() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::System__Collections__Hashtable__HashtableEnumerator::__set__currentKey(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType System::Collections::System__Collections__Hashtable__HashtableEnumerator::__get__currentKey() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::System__Collections__Hashtable__HashtableEnumerator::__set__currentValue(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType System::Collections::System__Collections__Hashtable__HashtableEnumerator::__get__currentValue() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "hashtable", ty: "System::Collections::Hashtable", modifiers: "", def_value: None }, CppParam { name: "getObjRetType", ty: "int32_t", modifiers: "", def_value: None }]
 System::Collections::System__Collections__Hashtable__HashtableEnumerator::System__Collections__Hashtable__HashtableEnumerator(System::Collections::Hashtable hashtable, int32_t getObjRetType)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<System__Collections__Hashtable__HashtableEnumerator>(hashtable, getObjRetType))) {}
 void System::Collections::System__Collections__Hashtable__HashtableEnumerator::_ctor(System::Collections::Hashtable hashtable, int32_t getObjRetType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__HashtableEnumerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Hashtable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, hashtable, getObjRetType);
}
 ::bs_hook::Il2CppWrapperType System::Collections::System__Collections__Hashtable__HashtableEnumerator::Clone()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__HashtableEnumerator>::get(),
                            "Clone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType System::Collections::System__Collections__Hashtable__HashtableEnumerator::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__HashtableEnumerator>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Collections::System__Collections__Hashtable__HashtableEnumerator::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__HashtableEnumerator>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::DictionaryEntry System::Collections::System__Collections__Hashtable__HashtableEnumerator::get_Entry()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__HashtableEnumerator>::get(),
                            "get_Entry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::DictionaryEntry, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType System::Collections::System__Collections__Hashtable__HashtableEnumerator::get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__HashtableEnumerator>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType System::Collections::System__Collections__Hashtable__HashtableEnumerator::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__HashtableEnumerator>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Collections::System__Collections__Hashtable__HashtableEnumerator::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::System__Collections__Hashtable__HashtableEnumerator>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
