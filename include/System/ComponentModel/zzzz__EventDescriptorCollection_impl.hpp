#pragma once
#include "System/ComponentModel/zzzz__EventDescriptorCollection_def.hpp"
#include "System/Collections/zzzz__IComparer_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/ComponentModel/zzzz__EventDescriptor_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
//  Writing Method size for method: System::ComponentModel::System__ComponentModel__EventDescriptorCollection__ArraySubsetEnumerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::System__ComponentModel__EventDescriptorCollection__ArraySubsetEnumerator::*)(System::Array, int32_t)>(&System::ComponentModel::System__ComponentModel__EventDescriptorCollection__ArraySubsetEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x277d078;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__EventDescriptorCollection__ArraySubsetEnumerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Array>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::System__ComponentModel__EventDescriptorCollection__ArraySubsetEnumerator.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::System__ComponentModel__EventDescriptorCollection__ArraySubsetEnumerator::*)()>(&System::ComponentModel::System__ComponentModel__EventDescriptorCollection__ArraySubsetEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x277d5fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__EventDescriptorCollection__ArraySubsetEnumerator>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::System__ComponentModel__EventDescriptorCollection__ArraySubsetEnumerator.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::System__ComponentModel__EventDescriptorCollection__ArraySubsetEnumerator::*)()>(&System::ComponentModel::System__ComponentModel__EventDescriptorCollection__ArraySubsetEnumerator::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x277d624;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__EventDescriptorCollection__ArraySubsetEnumerator>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::System__ComponentModel__EventDescriptorCollection__ArraySubsetEnumerator.get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::ComponentModel::System__ComponentModel__EventDescriptorCollection__ArraySubsetEnumerator::*)()>(&System::ComponentModel::System__ComponentModel__EventDescriptorCollection__ArraySubsetEnumerator::get_Current)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x277d630;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__EventDescriptorCollection__ArraySubsetEnumerator>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::IEnumerator
constexpr  System::ComponentModel::System__ComponentModel__EventDescriptorCollection__ArraySubsetEnumerator::operator System::Collections::IEnumerator() const noexcept {
return System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::ComponentModel::System__ComponentModel__EventDescriptorCollection__ArraySubsetEnumerator::__set__array(System::Array value)  {
::cordl_internals::setInstanceField<System::Array, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Array>(value));
}
constexpr System::Array System::ComponentModel::System__ComponentModel__EventDescriptorCollection__ArraySubsetEnumerator::__get__array() const {
return ::cordl_internals::getInstanceField<System::Array, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::ComponentModel::System__ComponentModel__EventDescriptorCollection__ArraySubsetEnumerator::__set__total(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::ComponentModel::System__ComponentModel__EventDescriptorCollection__ArraySubsetEnumerator::__get__total() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::ComponentModel::System__ComponentModel__EventDescriptorCollection__ArraySubsetEnumerator::__set__current(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::ComponentModel::System__ComponentModel__EventDescriptorCollection__ArraySubsetEnumerator::__get__current() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "array", ty: "System::Array", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }]
 System::ComponentModel::System__ComponentModel__EventDescriptorCollection__ArraySubsetEnumerator::System__ComponentModel__EventDescriptorCollection__ArraySubsetEnumerator(System::Array array, int32_t count)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<System__ComponentModel__EventDescriptorCollection__ArraySubsetEnumerator>(array, count))) {}
 void System::ComponentModel::System__ComponentModel__EventDescriptorCollection__ArraySubsetEnumerator::_ctor(System::Array array, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__EventDescriptorCollection__ArraySubsetEnumerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Array>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, array, count);
}
 bool System::ComponentModel::System__ComponentModel__EventDescriptorCollection__ArraySubsetEnumerator::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__EventDescriptorCollection__ArraySubsetEnumerator>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::ComponentModel::System__ComponentModel__EventDescriptorCollection__ArraySubsetEnumerator::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__EventDescriptorCollection__ArraySubsetEnumerator>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType System::ComponentModel::System__ComponentModel__EventDescriptorCollection__ArraySubsetEnumerator::get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__EventDescriptorCollection__ArraySubsetEnumerator>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::ComponentModel::EventDescriptorCollection._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::EventDescriptorCollection::*)(::ArrayW<System::ComponentModel::EventDescriptor>)>(&System::ComponentModel::EventDescriptorCollection::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x277c554;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::EventDescriptorCollection>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::ComponentModel::EventDescriptor>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::EventDescriptorCollection._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::EventDescriptorCollection::*)(::ArrayW<System::ComponentModel::EventDescriptor>, bool)>(&System::ComponentModel::EventDescriptorCollection::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x277c604;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::EventDescriptorCollection>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::ComponentModel::EventDescriptor>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::EventDescriptorCollection.get_Count
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::ComponentModel::EventDescriptorCollection::*)()>(&System::ComponentModel::EventDescriptorCollection::get_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x277c628;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::EventDescriptorCollection>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::EventDescriptorCollection.set_Count
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::EventDescriptorCollection::*)(int32_t)>(&System::ComponentModel::EventDescriptorCollection::set_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x277c630;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::EventDescriptorCollection>::get(),
                            "set_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::EventDescriptorCollection.get_Item
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ComponentModel::EventDescriptor (System::ComponentModel::EventDescriptorCollection::*)(int32_t)>(&System::ComponentModel::EventDescriptorCollection::get_Item)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x277c638;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::ComponentModel::EventDescriptorCollection),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::EventDescriptorCollection>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::EventDescriptorCollection.get_Item
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ComponentModel::EventDescriptor (System::ComponentModel::EventDescriptorCollection::*)(::StringW)>(&System::ComponentModel::EventDescriptorCollection::get_Item)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x277c770;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::ComponentModel::EventDescriptorCollection),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::EventDescriptorCollection>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::EventDescriptorCollection.Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::ComponentModel::EventDescriptorCollection::*)(System::ComponentModel::EventDescriptor)>(&System::ComponentModel::EventDescriptorCollection::Add)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x277c784;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::EventDescriptorCollection>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ComponentModel::EventDescriptor>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::EventDescriptorCollection.Clear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::EventDescriptorCollection::*)()>(&System::ComponentModel::EventDescriptorCollection::Clear)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x277c954;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::EventDescriptorCollection>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::EventDescriptorCollection.Contains
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::EventDescriptorCollection::*)(System::ComponentModel::EventDescriptor)>(&System::ComponentModel::EventDescriptorCollection::Contains)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x277c9a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::EventDescriptorCollection>::get(),
                            "Contains",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ComponentModel::EventDescriptor>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::EventDescriptorCollection.System_Collections_ICollection_CopyTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::EventDescriptorCollection::*)(System::Array, int32_t)>(&System::ComponentModel::EventDescriptorCollection::System_Collections_ICollection_CopyTo)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x277ca20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::EventDescriptorCollection>::get(),
                            "System.Collections.ICollection.CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Array>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::EventDescriptorCollection.EnsureEventsOwned
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::EventDescriptorCollection::*)()>(&System::ComponentModel::EventDescriptorCollection::EnsureEventsOwned)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x277c6c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::EventDescriptorCollection>::get(),
                            "EnsureEventsOwned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::EventDescriptorCollection.EnsureSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::EventDescriptorCollection::*)(int32_t)>(&System::ComponentModel::EventDescriptorCollection::EnsureSize)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x277c854;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::EventDescriptorCollection>::get(),
                            "EnsureSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::EventDescriptorCollection.Find
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ComponentModel::EventDescriptor (System::ComponentModel::EventDescriptorCollection::*)(::StringW, bool)>(&System::ComponentModel::EventDescriptorCollection::Find)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x277ccb8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::ComponentModel::EventDescriptorCollection),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::EventDescriptorCollection>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::EventDescriptorCollection.IndexOf
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::ComponentModel::EventDescriptorCollection::*)(System::ComponentModel::EventDescriptor)>(&System::ComponentModel::EventDescriptorCollection::IndexOf)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x277c9c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::EventDescriptorCollection>::get(),
                            "IndexOf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ComponentModel::EventDescriptor>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::EventDescriptorCollection.Insert
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::EventDescriptorCollection::*)(int32_t, System::ComponentModel::EventDescriptor)>(&System::ComponentModel::EventDescriptorCollection::Insert)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x277cdcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::EventDescriptorCollection>::get(),
                            "Insert",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ComponentModel::EventDescriptor>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::EventDescriptorCollection.Remove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::EventDescriptorCollection::*)(System::ComponentModel::EventDescriptor)>(&System::ComponentModel::EventDescriptorCollection::Remove)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x277cebc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::EventDescriptorCollection>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ComponentModel::EventDescriptor>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::EventDescriptorCollection.RemoveAt
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::EventDescriptorCollection::*)(int32_t)>(&System::ComponentModel::EventDescriptorCollection::RemoveAt)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x277cf2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::EventDescriptorCollection>::get(),
                            "RemoveAt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::EventDescriptorCollection.GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator (System::ComponentModel::EventDescriptorCollection::*)()>(&System::ComponentModel::EventDescriptorCollection::GetEnumerator)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x277cfe0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::EventDescriptorCollection>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::EventDescriptorCollection.InternalSort
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::EventDescriptorCollection::*)(::ArrayW<::StringW>)>(&System::ComponentModel::EventDescriptorCollection::InternalSort)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x277ca5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::EventDescriptorCollection>::get(),
                            "InternalSort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::EventDescriptorCollection.InternalSort
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::EventDescriptorCollection::*)(System::Collections::IComparer)>(&System::ComponentModel::EventDescriptorCollection::InternalSort)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x277d0ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::EventDescriptorCollection>::get(),
                            "InternalSort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IComparer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::EventDescriptorCollection.System_Collections_ICollection_get_IsSynchronized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::EventDescriptorCollection::*)()>(&System::ComponentModel::EventDescriptorCollection::System_Collections_ICollection_get_IsSynchronized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x277d124;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::EventDescriptorCollection>::get(),
                            "System.Collections.ICollection.get_IsSynchronized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::EventDescriptorCollection.System_Collections_ICollection_get_SyncRoot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::ComponentModel::EventDescriptorCollection::*)()>(&System::ComponentModel::EventDescriptorCollection::System_Collections_ICollection_get_SyncRoot)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x277d12c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::EventDescriptorCollection>::get(),
                            "System.Collections.ICollection.get_SyncRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::EventDescriptorCollection.System_Collections_ICollection_get_Count
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::ComponentModel::EventDescriptorCollection::*)()>(&System::ComponentModel::EventDescriptorCollection::System_Collections_ICollection_get_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x277d134;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::EventDescriptorCollection>::get(),
                            "System.Collections.ICollection.get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::EventDescriptorCollection.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator (System::ComponentModel::EventDescriptorCollection::*)()>(&System::ComponentModel::EventDescriptorCollection::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x277d13c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::EventDescriptorCollection>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::EventDescriptorCollection.System_Collections_IList_get_Item
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::ComponentModel::EventDescriptorCollection::*)(int32_t)>(&System::ComponentModel::EventDescriptorCollection::System_Collections_IList_get_Item)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x277d140;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::EventDescriptorCollection>::get(),
                            "System.Collections.IList.get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::EventDescriptorCollection.System_Collections_IList_set_Item
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::EventDescriptorCollection::*)(int32_t, ::bs_hook::Il2CppWrapperType)>(&System::ComponentModel::EventDescriptorCollection::System_Collections_IList_set_Item)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x277d150;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::EventDescriptorCollection>::get(),
                            "System.Collections.IList.set_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::EventDescriptorCollection.System_Collections_IList_Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::ComponentModel::EventDescriptorCollection::*)(::bs_hook::Il2CppWrapperType)>(&System::ComponentModel::EventDescriptorCollection::System_Collections_IList_Add)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x277d2c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::EventDescriptorCollection>::get(),
                            "System.Collections.IList.Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::EventDescriptorCollection.System_Collections_IList_Contains
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::EventDescriptorCollection::*)(::bs_hook::Il2CppWrapperType)>(&System::ComponentModel::EventDescriptorCollection::System_Collections_IList_Contains)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x277d34c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::EventDescriptorCollection>::get(),
                            "System.Collections.IList.Contains",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::EventDescriptorCollection.System_Collections_IList_Clear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::EventDescriptorCollection::*)()>(&System::ComponentModel::EventDescriptorCollection::System_Collections_IList_Clear)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x277d3dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::EventDescriptorCollection>::get(),
                            "System.Collections.IList.Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::EventDescriptorCollection.System_Collections_IList_IndexOf
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::ComponentModel::EventDescriptorCollection::*)(::bs_hook::Il2CppWrapperType)>(&System::ComponentModel::EventDescriptorCollection::System_Collections_IList_IndexOf)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x277d3e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::EventDescriptorCollection>::get(),
                            "System.Collections.IList.IndexOf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::EventDescriptorCollection.System_Collections_IList_Insert
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::EventDescriptorCollection::*)(int32_t, ::bs_hook::Il2CppWrapperType)>(&System::ComponentModel::EventDescriptorCollection::System_Collections_IList_Insert)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x277d464;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::EventDescriptorCollection>::get(),
                            "System.Collections.IList.Insert",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::EventDescriptorCollection.System_Collections_IList_Remove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::EventDescriptorCollection::*)(::bs_hook::Il2CppWrapperType)>(&System::ComponentModel::EventDescriptorCollection::System_Collections_IList_Remove)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x277d4f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::EventDescriptorCollection>::get(),
                            "System.Collections.IList.Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::EventDescriptorCollection.System_Collections_IList_RemoveAt
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::EventDescriptorCollection::*)(int32_t)>(&System::ComponentModel::EventDescriptorCollection::System_Collections_IList_RemoveAt)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x277d57c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::EventDescriptorCollection>::get(),
                            "System.Collections.IList.RemoveAt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::EventDescriptorCollection.System_Collections_IList_get_IsReadOnly
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::EventDescriptorCollection::*)()>(&System::ComponentModel::EventDescriptorCollection::System_Collections_IList_get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x277d580;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::EventDescriptorCollection>::get(),
                            "System.Collections.IList.get_IsReadOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::EventDescriptorCollection.System_Collections_IList_get_IsFixedSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::EventDescriptorCollection::*)()>(&System::ComponentModel::EventDescriptorCollection::System_Collections_IList_get_IsFixedSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x277d588;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::EventDescriptorCollection>::get(),
                            "System.Collections.IList.get_IsFixedSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::ICollection
constexpr  System::ComponentModel::EventDescriptorCollection::operator System::Collections::ICollection() const noexcept {
return System::Collections::ICollection(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerable
constexpr  System::ComponentModel::EventDescriptorCollection::operator System::Collections::IEnumerable() const noexcept {
return System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IList
constexpr  System::ComponentModel::EventDescriptorCollection::operator System::Collections::IList() const noexcept {
return System::Collections::IList(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::ComponentModel::EventDescriptorCollection::__set__events(::ArrayW<System::ComponentModel::EventDescriptor> value)  {
::cordl_internals::setInstanceField<::ArrayW<System::ComponentModel::EventDescriptor>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<System::ComponentModel::EventDescriptor>>(value));
}
constexpr ::ArrayW<System::ComponentModel::EventDescriptor> System::ComponentModel::EventDescriptorCollection::__get__events() const {
return ::cordl_internals::getInstanceField<::ArrayW<System::ComponentModel::EventDescriptor>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::ComponentModel::EventDescriptorCollection::__set__namedSort(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> System::ComponentModel::EventDescriptorCollection::__get__namedSort() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::ComponentModel::EventDescriptorCollection::__set__comparer(System::Collections::IComparer value)  {
::cordl_internals::setInstanceField<System::Collections::IComparer, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::IComparer>(value));
}
constexpr System::Collections::IComparer System::ComponentModel::EventDescriptorCollection::__get__comparer() const {
return ::cordl_internals::getInstanceField<System::Collections::IComparer, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::ComponentModel::EventDescriptorCollection::__set__eventsOwned(bool value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::ComponentModel::EventDescriptorCollection::__get__eventsOwned() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::ComponentModel::EventDescriptorCollection::__set__needSort(bool value)  {
::cordl_internals::setInstanceField<bool, 0x29>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::ComponentModel::EventDescriptorCollection::__get__needSort() const {
return ::cordl_internals::getInstanceField<bool, 0x29>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::ComponentModel::EventDescriptorCollection::__set__readOnly(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2a>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::ComponentModel::EventDescriptorCollection::__get__readOnly() const {
return ::cordl_internals::getInstanceField<bool, 0x2a>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void System::ComponentModel::EventDescriptorCollection::__set_Empty(System::ComponentModel::EventDescriptorCollection value)  {
::cordl_internals::setStaticField<System::ComponentModel::EventDescriptorCollection, "Empty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::EventDescriptorCollection>::get>(std::forward<System::ComponentModel::EventDescriptorCollection>(value));
}
 System::ComponentModel::EventDescriptorCollection System::ComponentModel::EventDescriptorCollection::__get_Empty()  {
return ::cordl_internals::getStaticField<System::ComponentModel::EventDescriptorCollection, "Empty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::EventDescriptorCollection>::get>();
}
constexpr void System::ComponentModel::EventDescriptorCollection::__set__Count_k__BackingField(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::ComponentModel::EventDescriptorCollection::__get__Count_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "events", ty: "::ArrayW<System::ComponentModel::EventDescriptor>", modifiers: "", def_value: None }]
 System::ComponentModel::EventDescriptorCollection::EventDescriptorCollection(::ArrayW<System::ComponentModel::EventDescriptor> events)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<EventDescriptorCollection>(events))) {}
 void System::ComponentModel::EventDescriptorCollection::_ctor(::ArrayW<System::ComponentModel::EventDescriptor> events)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::EventDescriptorCollection>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::ComponentModel::EventDescriptor>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, events);
}
// Ctor Parameters [CppParam { name: "events", ty: "::ArrayW<System::ComponentModel::EventDescriptor>", modifiers: "", def_value: None }, CppParam { name: "readOnly", ty: "bool", modifiers: "", def_value: None }]
 System::ComponentModel::EventDescriptorCollection::EventDescriptorCollection(::ArrayW<System::ComponentModel::EventDescriptor> events, bool readOnly)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<EventDescriptorCollection>(events, readOnly))) {}
 void System::ComponentModel::EventDescriptorCollection::_ctor(::ArrayW<System::ComponentModel::EventDescriptor> events, bool readOnly)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::EventDescriptorCollection>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::ComponentModel::EventDescriptor>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, events, readOnly);
}
 int32_t System::ComponentModel::EventDescriptorCollection::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::EventDescriptorCollection>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::ComponentModel::EventDescriptorCollection::set_Count(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::EventDescriptorCollection>::get(),
                            "set_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::ComponentModel::EventDescriptor System::ComponentModel::EventDescriptorCollection::get_Item(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::EventDescriptorCollection>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ComponentModel::EventDescriptor, false>(const_cast<void*>(instance), ___internal_method, index);
}
 System::ComponentModel::EventDescriptor System::ComponentModel::EventDescriptorCollection::get_Item(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::EventDescriptorCollection>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ComponentModel::EventDescriptor, false>(const_cast<void*>(instance), ___internal_method, name);
}
 int32_t System::ComponentModel::EventDescriptorCollection::Add(System::ComponentModel::EventDescriptor value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::EventDescriptorCollection>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ComponentModel::EventDescriptor>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void System::ComponentModel::EventDescriptorCollection::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::EventDescriptorCollection>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::ComponentModel::EventDescriptorCollection::Contains(System::ComponentModel::EventDescriptor value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::EventDescriptorCollection>::get(),
                            "Contains",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ComponentModel::EventDescriptor>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void System::ComponentModel::EventDescriptorCollection::System_Collections_ICollection_CopyTo(System::Array array, int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::EventDescriptorCollection>::get(),
                            "System.Collections.ICollection.CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Array>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, array, index);
}
 void System::ComponentModel::EventDescriptorCollection::EnsureEventsOwned()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::EventDescriptorCollection>::get(),
                            "EnsureEventsOwned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::ComponentModel::EventDescriptorCollection::EnsureSize(int32_t sizeNeeded)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::EventDescriptorCollection>::get(),
                            "EnsureSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sizeNeeded);
}
 System::ComponentModel::EventDescriptor System::ComponentModel::EventDescriptorCollection::Find(::StringW name, bool ignoreCase)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::EventDescriptorCollection>::get(),
                            "Find",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ComponentModel::EventDescriptor, false>(const_cast<void*>(instance), ___internal_method, name, ignoreCase);
}
 int32_t System::ComponentModel::EventDescriptorCollection::IndexOf(System::ComponentModel::EventDescriptor value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::EventDescriptorCollection>::get(),
                            "IndexOf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ComponentModel::EventDescriptor>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void System::ComponentModel::EventDescriptorCollection::Insert(int32_t index, System::ComponentModel::EventDescriptor value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::EventDescriptorCollection>::get(),
                            "Insert",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ComponentModel::EventDescriptor>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, index, value);
}
 void System::ComponentModel::EventDescriptorCollection::Remove(System::ComponentModel::EventDescriptor value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::EventDescriptorCollection>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ComponentModel::EventDescriptor>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void System::ComponentModel::EventDescriptorCollection::RemoveAt(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::EventDescriptorCollection>::get(),
                            "RemoveAt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, index);
}
 System::Collections::IEnumerator System::ComponentModel::EventDescriptorCollection::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::EventDescriptorCollection>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::ComponentModel::EventDescriptorCollection::InternalSort(::ArrayW<::StringW> names)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::EventDescriptorCollection>::get(),
                            "InternalSort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, names);
}
 void System::ComponentModel::EventDescriptorCollection::InternalSort(System::Collections::IComparer sorter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::EventDescriptorCollection>::get(),
                            "InternalSort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sorter);
}
 bool System::ComponentModel::EventDescriptorCollection::System_Collections_ICollection_get_IsSynchronized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::EventDescriptorCollection>::get(),
                            "System.Collections.ICollection.get_IsSynchronized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType System::ComponentModel::EventDescriptorCollection::System_Collections_ICollection_get_SyncRoot()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::EventDescriptorCollection>::get(),
                            "System.Collections.ICollection.get_SyncRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::ComponentModel::EventDescriptorCollection::System_Collections_ICollection_get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::EventDescriptorCollection>::get(),
                            "System.Collections.ICollection.get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IEnumerator System::ComponentModel::EventDescriptorCollection::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::EventDescriptorCollection>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType System::ComponentModel::EventDescriptorCollection::System_Collections_IList_get_Item(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::EventDescriptorCollection>::get(),
                            "System.Collections.IList.get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, index);
}
 void System::ComponentModel::EventDescriptorCollection::System_Collections_IList_set_Item(int32_t index, ::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::EventDescriptorCollection>::get(),
                            "System.Collections.IList.set_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, index, value);
}
 int32_t System::ComponentModel::EventDescriptorCollection::System_Collections_IList_Add(::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::EventDescriptorCollection>::get(),
                            "System.Collections.IList.Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool System::ComponentModel::EventDescriptorCollection::System_Collections_IList_Contains(::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::EventDescriptorCollection>::get(),
                            "System.Collections.IList.Contains",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void System::ComponentModel::EventDescriptorCollection::System_Collections_IList_Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::EventDescriptorCollection>::get(),
                            "System.Collections.IList.Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::ComponentModel::EventDescriptorCollection::System_Collections_IList_IndexOf(::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::EventDescriptorCollection>::get(),
                            "System.Collections.IList.IndexOf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void System::ComponentModel::EventDescriptorCollection::System_Collections_IList_Insert(int32_t index, ::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::EventDescriptorCollection>::get(),
                            "System.Collections.IList.Insert",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, index, value);
}
 void System::ComponentModel::EventDescriptorCollection::System_Collections_IList_Remove(::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::EventDescriptorCollection>::get(),
                            "System.Collections.IList.Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void System::ComponentModel::EventDescriptorCollection::System_Collections_IList_RemoveAt(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::EventDescriptorCollection>::get(),
                            "System.Collections.IList.RemoveAt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, index);
}
 bool System::ComponentModel::EventDescriptorCollection::System_Collections_IList_get_IsReadOnly()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::EventDescriptorCollection>::get(),
                            "System.Collections.IList.get_IsReadOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::ComponentModel::EventDescriptorCollection::System_Collections_IList_get_IsFixedSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::EventDescriptorCollection>::get(),
                            "System.Collections.IList.get_IsFixedSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
