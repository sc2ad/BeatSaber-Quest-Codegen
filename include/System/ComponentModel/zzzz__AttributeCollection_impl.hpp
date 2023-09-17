#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "System/ComponentModel/zzzz__AttributeCollection_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__Array_def.hpp"
// Ctor Parameters [CppParam { name: "type", ty: "::System::Type", modifiers: "", def_value: Some("csnull") }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::ComponentModel::____System__ComponentModel__AttributeCollection__AttributeEntry::____System__ComponentModel__AttributeCollection__AttributeEntry(::System::Type type, int32_t index) noexcept : ::bs_hook::ValueTypeWrapper() {this->type = type;
this->index = index;
}
constexpr void ::System::ComponentModel::____System__ComponentModel__AttributeCollection__AttributeEntry::__set_type(::System::Type value)  {
::cordl_internals::setInstanceField<::System::Type, 0x0>(this->__instance, std::forward<::System::Type>(value));
}
constexpr ::System::Type ::System::ComponentModel::____System__ComponentModel__AttributeCollection__AttributeEntry::__get_type() const {
return ::cordl_internals::getInstanceField<::System::Type, 0x0>(this->__instance);
}
constexpr void ::System::ComponentModel::____System__ComponentModel__AttributeCollection__AttributeEntry::__set_index(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::ComponentModel::____System__ComponentModel__AttributeCollection__AttributeEntry::__get_index() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
//  Writing Method size for method: ::System::ComponentModel::AttributeCollection._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::AttributeCollection::*)(::ArrayW<::System::Attribute>)>(&::System::ComponentModel::AttributeCollection::_ctor)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2772f08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AttributeCollection.get_Attributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Attribute> (::System::ComponentModel::AttributeCollection::*)()>(&::System::ComponentModel::AttributeCollection::get_Attributes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x277302c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::ComponentModel::AttributeCollection),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AttributeCollection.get_Count
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::ComponentModel::AttributeCollection::*)()>(&::System::ComponentModel::AttributeCollection::get_Count)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2773034;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AttributeCollection.get_Item
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Attribute (::System::ComponentModel::AttributeCollection::*)(::System::Type)>(&::System::ComponentModel::AttributeCollection::get_Item)> {
  constexpr static std::size_t size = 0x4d8;
  constexpr static std::size_t addrs = 0x2773058;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::ComponentModel::AttributeCollection),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AttributeCollection.Contains
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::AttributeCollection::*)(::System::Attribute)>(&::System::ComponentModel::AttributeCollection::Contains)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2773a80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection>::get(),
                            "Contains",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Attribute>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AttributeCollection.GetDefaultAttribute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Attribute (::System::ComponentModel::AttributeCollection::*)(::System::Type)>(&::System::ComponentModel::AttributeCollection::GetDefaultAttribute)> {
  constexpr static std::size_t size = 0x550;
  constexpr static std::size_t addrs = 0x2773530;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection>::get(),
                            "GetDefaultAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AttributeCollection.GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator (::System::ComponentModel::AttributeCollection::*)()>(&::System::ComponentModel::AttributeCollection::GetEnumerator)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2773ae0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AttributeCollection.System_Collections_ICollection_get_IsSynchronized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::AttributeCollection::*)()>(&::System::ComponentModel::AttributeCollection::System_Collections_ICollection_get_IsSynchronized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2773b04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection>::get(),
                            "System.Collections.ICollection.get_IsSynchronized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AttributeCollection.System_Collections_ICollection_get_SyncRoot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::System::ComponentModel::AttributeCollection::*)()>(&::System::ComponentModel::AttributeCollection::System_Collections_ICollection_get_SyncRoot)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2773b0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection>::get(),
                            "System.Collections.ICollection.get_SyncRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AttributeCollection.System_Collections_ICollection_get_Count
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::ComponentModel::AttributeCollection::*)()>(&::System::ComponentModel::AttributeCollection::System_Collections_ICollection_get_Count)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2773b14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection>::get(),
                            "System.Collections.ICollection.get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AttributeCollection.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator (::System::ComponentModel::AttributeCollection::*)()>(&::System::ComponentModel::AttributeCollection::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2773b38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AttributeCollection.CopyTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::AttributeCollection::*)(::System::Array, int32_t)>(&::System::ComponentModel::AttributeCollection::CopyTo)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2773b3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection>::get(),
                            "CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Collections::ICollection
constexpr  ::System::ComponentModel::AttributeCollection::operator ::System::Collections::ICollection() const noexcept {
return ::System::Collections::ICollection(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr  ::System::ComponentModel::AttributeCollection::operator ::System::Collections::IEnumerable() const noexcept {
return ::System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
 void ::System::ComponentModel::AttributeCollection::__set_Empty(::System::ComponentModel::AttributeCollection value)  {
::cordl_internals::setStaticField<::System::ComponentModel::AttributeCollection, "Empty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection>::get>(std::forward<::System::ComponentModel::AttributeCollection>(value));
}
 ::System::ComponentModel::AttributeCollection ::System::ComponentModel::AttributeCollection::__get_Empty()  {
return ::cordl_internals::getStaticField<::System::ComponentModel::AttributeCollection, "Empty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection>::get>();
}
 void ::System::ComponentModel::AttributeCollection::__set_s_defaultAttributes(::System::Collections::Hashtable value)  {
::cordl_internals::setStaticField<::System::Collections::Hashtable, "s_defaultAttributes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection>::get>(std::forward<::System::Collections::Hashtable>(value));
}
 ::System::Collections::Hashtable ::System::ComponentModel::AttributeCollection::__get_s_defaultAttributes()  {
return ::cordl_internals::getStaticField<::System::Collections::Hashtable, "s_defaultAttributes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection>::get>();
}
constexpr void ::System::ComponentModel::AttributeCollection::__set__attributes(::ArrayW<::System::Attribute> value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Attribute>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::System::Attribute>>(value));
}
constexpr ::ArrayW<::System::Attribute> ::System::ComponentModel::AttributeCollection::__get__attributes() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Attribute>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::System::ComponentModel::AttributeCollection::__set_s_internalSyncObject(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setStaticField<::bs_hook::Il2CppWrapperType, "s_internalSyncObject", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection>::get>(std::forward<::bs_hook::Il2CppWrapperType>(value));
}
 ::bs_hook::Il2CppWrapperType ::System::ComponentModel::AttributeCollection::__get_s_internalSyncObject()  {
return ::cordl_internals::getStaticField<::bs_hook::Il2CppWrapperType, "s_internalSyncObject", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection>::get>();
}
constexpr void ::System::ComponentModel::AttributeCollection::__set__foundAttributeTypes(::ArrayW<::System::ComponentModel::____System__ComponentModel__AttributeCollection__AttributeEntry> value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::ComponentModel::____System__ComponentModel__AttributeCollection__AttributeEntry>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::System::ComponentModel::____System__ComponentModel__AttributeCollection__AttributeEntry>>(value));
}
constexpr ::ArrayW<::System::ComponentModel::____System__ComponentModel__AttributeCollection__AttributeEntry> ::System::ComponentModel::AttributeCollection::__get__foundAttributeTypes() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::ComponentModel::____System__ComponentModel__AttributeCollection__AttributeEntry>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::ComponentModel::AttributeCollection::__set__index(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::ComponentModel::AttributeCollection::__get__index() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "attributes", ty: "::ArrayW<::System::Attribute>", modifiers: "", def_value: None }]
 ::System::ComponentModel::AttributeCollection::AttributeCollection(::ArrayW<::System::Attribute> attributes)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<AttributeCollection>(attributes))) {}
 void ::System::ComponentModel::AttributeCollection::_ctor(::ArrayW<::System::Attribute> attributes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, attributes);
}
 ::ArrayW<::System::Attribute> ::System::ComponentModel::AttributeCollection::get_Attributes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection>::get(),
                            "get_Attributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Attribute>, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::System::ComponentModel::AttributeCollection::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Attribute ::System::ComponentModel::AttributeCollection::get_Item(::System::Type attributeType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Attribute, false>(const_cast<void*>(instance), ___internal_method, attributeType);
}
 bool ::System::ComponentModel::AttributeCollection::Contains(::System::Attribute attribute)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection>::get(),
                            "Contains",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Attribute>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, attribute);
}
 ::System::Attribute ::System::ComponentModel::AttributeCollection::GetDefaultAttribute(::System::Type attributeType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection>::get(),
                            "GetDefaultAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Attribute, false>(const_cast<void*>(instance), ___internal_method, attributeType);
}
 ::System::Collections::IEnumerator ::System::ComponentModel::AttributeCollection::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::ComponentModel::AttributeCollection::System_Collections_ICollection_get_IsSynchronized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection>::get(),
                            "System.Collections.ICollection.get_IsSynchronized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType ::System::ComponentModel::AttributeCollection::System_Collections_ICollection_get_SyncRoot()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection>::get(),
                            "System.Collections.ICollection.get_SyncRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::System::ComponentModel::AttributeCollection::System_Collections_ICollection_get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection>::get(),
                            "System.Collections.ICollection.get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::IEnumerator ::System::ComponentModel::AttributeCollection::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::ComponentModel::AttributeCollection::CopyTo(::System::Array array, int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection>::get(),
                            "CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, array, index);
}
} // end anonymous namespace
