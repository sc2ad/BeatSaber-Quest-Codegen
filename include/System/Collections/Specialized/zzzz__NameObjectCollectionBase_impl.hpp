#pragma once
#include "System/Collections/Specialized/zzzz__NameObjectCollectionBase_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Runtime/Serialization/zzzz__IDeserializationCallback_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__StringComparer_def.hpp"
#include "System/zzzz__DBNull_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Collections/zzzz__IEqualityComparer_def.hpp"
//  Writing Method size for method: System::Collections::Specialized::System__Collections__Specialized__NameObjectCollectionBase__NameObjectEntry._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Specialized::System__Collections__Specialized__NameObjectCollectionBase__NameObjectEntry::*)(::StringW, ::bs_hook::Il2CppWrapperType)>(&System::Collections::Specialized::System__Collections__Specialized__NameObjectCollectionBase__NameObjectEntry::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x27ae670;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Specialized::System__Collections__Specialized__NameObjectCollectionBase__NameObjectEntry>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Collections::Specialized::System__Collections__Specialized__NameObjectCollectionBase__NameObjectEntry::__set_Key(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Collections::Specialized::System__Collections__Specialized__NameObjectCollectionBase__NameObjectEntry::__get_Key() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Specialized::System__Collections__Specialized__NameObjectCollectionBase__NameObjectEntry::__set_Value(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType System::Collections::Specialized::System__Collections__Specialized__NameObjectCollectionBase__NameObjectEntry::__get_Value() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }]
 System::Collections::Specialized::System__Collections__Specialized__NameObjectCollectionBase__NameObjectEntry::System__Collections__Specialized__NameObjectCollectionBase__NameObjectEntry(::StringW name, ::bs_hook::Il2CppWrapperType value)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<System__Collections__Specialized__NameObjectCollectionBase__NameObjectEntry>(name, value))) {}
 void System::Collections::Specialized::System__Collections__Specialized__NameObjectCollectionBase__NameObjectEntry::_ctor(::StringW name, ::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Specialized::System__Collections__Specialized__NameObjectCollectionBase__NameObjectEntry>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, name, value);
}
//  Writing Method size for method: System::Collections::Specialized::System__Collections__Specialized__NameObjectCollectionBase__NameObjectKeysEnumerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Specialized::System__Collections__Specialized__NameObjectCollectionBase__NameObjectKeysEnumerator::*)(System::Collections::Specialized::NameObjectCollectionBase)>(&System::Collections::Specialized::System__Collections__Specialized__NameObjectCollectionBase__NameObjectKeysEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x27ae6fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Specialized::System__Collections__Specialized__NameObjectCollectionBase__NameObjectKeysEnumerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Specialized::NameObjectCollectionBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Specialized::System__Collections__Specialized__NameObjectCollectionBase__NameObjectKeysEnumerator.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::Specialized::System__Collections__Specialized__NameObjectCollectionBase__NameObjectKeysEnumerator::*)()>(&System::Collections::Specialized::System__Collections__Specialized__NameObjectCollectionBase__NameObjectKeysEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x27aeba8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Specialized::System__Collections__Specialized__NameObjectCollectionBase__NameObjectKeysEnumerator>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Specialized::System__Collections__Specialized__NameObjectCollectionBase__NameObjectKeysEnumerator.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Specialized::System__Collections__Specialized__NameObjectCollectionBase__NameObjectKeysEnumerator::*)()>(&System::Collections::Specialized::System__Collections__Specialized__NameObjectCollectionBase__NameObjectKeysEnumerator::Reset)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x27aec88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Specialized::System__Collections__Specialized__NameObjectCollectionBase__NameObjectKeysEnumerator>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Specialized::System__Collections__Specialized__NameObjectCollectionBase__NameObjectKeysEnumerator.get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Collections::Specialized::System__Collections__Specialized__NameObjectCollectionBase__NameObjectKeysEnumerator::*)()>(&System::Collections::Specialized::System__Collections__Specialized__NameObjectCollectionBase__NameObjectKeysEnumerator::get_Current)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x27aed18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Specialized::System__Collections__Specialized__NameObjectCollectionBase__NameObjectKeysEnumerator>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::IEnumerator
constexpr  System::Collections::Specialized::System__Collections__Specialized__NameObjectCollectionBase__NameObjectKeysEnumerator::operator System::Collections::IEnumerator() const noexcept {
return System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Specialized::System__Collections__Specialized__NameObjectCollectionBase__NameObjectKeysEnumerator::__set__pos(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Collections::Specialized::System__Collections__Specialized__NameObjectCollectionBase__NameObjectKeysEnumerator::__get__pos() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Specialized::System__Collections__Specialized__NameObjectCollectionBase__NameObjectKeysEnumerator::__set__coll(System::Collections::Specialized::NameObjectCollectionBase value)  {
::cordl_internals::setInstanceField<System::Collections::Specialized::NameObjectCollectionBase, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Specialized::NameObjectCollectionBase>(value));
}
constexpr System::Collections::Specialized::NameObjectCollectionBase System::Collections::Specialized::System__Collections__Specialized__NameObjectCollectionBase__NameObjectKeysEnumerator::__get__coll() const {
return ::cordl_internals::getInstanceField<System::Collections::Specialized::NameObjectCollectionBase, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Specialized::System__Collections__Specialized__NameObjectCollectionBase__NameObjectKeysEnumerator::__set__version(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Collections::Specialized::System__Collections__Specialized__NameObjectCollectionBase__NameObjectKeysEnumerator::__get__version() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "coll", ty: "System::Collections::Specialized::NameObjectCollectionBase", modifiers: "", def_value: None }]
 System::Collections::Specialized::System__Collections__Specialized__NameObjectCollectionBase__NameObjectKeysEnumerator::System__Collections__Specialized__NameObjectCollectionBase__NameObjectKeysEnumerator(System::Collections::Specialized::NameObjectCollectionBase coll)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<System__Collections__Specialized__NameObjectCollectionBase__NameObjectKeysEnumerator>(coll))) {}
 void System::Collections::Specialized::System__Collections__Specialized__NameObjectCollectionBase__NameObjectKeysEnumerator::_ctor(System::Collections::Specialized::NameObjectCollectionBase coll)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Specialized::System__Collections__Specialized__NameObjectCollectionBase__NameObjectKeysEnumerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Specialized::NameObjectCollectionBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, coll);
}
 bool System::Collections::Specialized::System__Collections__Specialized__NameObjectCollectionBase__NameObjectKeysEnumerator::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Specialized::System__Collections__Specialized__NameObjectCollectionBase__NameObjectKeysEnumerator>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Collections::Specialized::System__Collections__Specialized__NameObjectCollectionBase__NameObjectKeysEnumerator::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Specialized::System__Collections__Specialized__NameObjectCollectionBase__NameObjectKeysEnumerator>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType System::Collections::Specialized::System__Collections__Specialized__NameObjectCollectionBase__NameObjectKeysEnumerator::get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Specialized::System__Collections__Specialized__NameObjectCollectionBase__NameObjectKeysEnumerator>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::Collections::Specialized::NameObjectCollectionBase._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Specialized::NameObjectCollectionBase::*)()>(&System::Collections::Specialized::NameObjectCollectionBase::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x27aa1d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Specialized::NameObjectCollectionBase>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Specialized::NameObjectCollectionBase._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Specialized::NameObjectCollectionBase::*)(System::Collections::IEqualityComparer)>(&System::Collections::Specialized::NameObjectCollectionBase::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x27ad468;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Specialized::NameObjectCollectionBase>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Specialized::NameObjectCollectionBase._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Specialized::NameObjectCollectionBase::*)(int32_t, System::Collections::IEqualityComparer)>(&System::Collections::Specialized::NameObjectCollectionBase::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x27aa3b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Specialized::NameObjectCollectionBase>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Specialized::NameObjectCollectionBase._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Specialized::NameObjectCollectionBase::*)(int32_t)>(&System::Collections::Specialized::NameObjectCollectionBase::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x27aa294;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Specialized::NameObjectCollectionBase>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Specialized::NameObjectCollectionBase._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Specialized::NameObjectCollectionBase::*)(System::DBNull)>(&System::Collections::Specialized::NameObjectCollectionBase::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27ab12c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Specialized::NameObjectCollectionBase>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DBNull>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Specialized::NameObjectCollectionBase._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Specialized::NameObjectCollectionBase::*)(System::Runtime::Serialization::SerializationInfo, System::Runtime::Serialization::StreamingContext)>(&System::Collections::Specialized::NameObjectCollectionBase::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x27aa450;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Specialized::NameObjectCollectionBase>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Specialized::NameObjectCollectionBase.GetObjectData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Specialized::NameObjectCollectionBase::*)(System::Runtime::Serialization::SerializationInfo, System::Runtime::Serialization::StreamingContext)>(&System::Collections::Specialized::NameObjectCollectionBase::GetObjectData)> {
  constexpr static std::size_t size = 0x580;
  constexpr static std::size_t addrs = 0x27ad664;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::Specialized::NameObjectCollectionBase),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Specialized::NameObjectCollectionBase>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Specialized::NameObjectCollectionBase.OnDeserialization
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Specialized::NameObjectCollectionBase::*)(::bs_hook::Il2CppWrapperType)>(&System::Collections::Specialized::NameObjectCollectionBase::OnDeserialization)> {
  constexpr static std::size_t size = 0x768;
  constexpr static std::size_t addrs = 0x27adda0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::Specialized::NameObjectCollectionBase),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Specialized::NameObjectCollectionBase>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Specialized::NameObjectCollectionBase.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Specialized::NameObjectCollectionBase::*)()>(&System::Collections::Specialized::NameObjectCollectionBase::Reset)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x27ad4e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Specialized::NameObjectCollectionBase>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Specialized::NameObjectCollectionBase.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Specialized::NameObjectCollectionBase::*)(int32_t)>(&System::Collections::Specialized::NameObjectCollectionBase::Reset)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x27ad5a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Specialized::NameObjectCollectionBase>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Specialized::NameObjectCollectionBase.FindEntry
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Specialized::System__Collections__Specialized__NameObjectCollectionBase__NameObjectEntry (System::Collections::Specialized::NameObjectCollectionBase::*)(::StringW)>(&System::Collections::Specialized::NameObjectCollectionBase::FindEntry)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x27ae5b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Specialized::NameObjectCollectionBase>::get(),
                            "FindEntry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Specialized::NameObjectCollectionBase.get_IsReadOnly
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::Specialized::NameObjectCollectionBase::*)()>(&System::Collections::Specialized::NameObjectCollectionBase::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27ae668;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Specialized::NameObjectCollectionBase>::get(),
                            "get_IsReadOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Specialized::NameObjectCollectionBase.BaseAdd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Specialized::NameObjectCollectionBase::*)(::StringW, ::bs_hook::Il2CppWrapperType)>(&System::Collections::Specialized::NameObjectCollectionBase::BaseAdd)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x27aa844;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Specialized::NameObjectCollectionBase>::get(),
                            "BaseAdd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Specialized::NameObjectCollectionBase.BaseRemove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Specialized::NameObjectCollectionBase::*)(::StringW)>(&System::Collections::Specialized::NameObjectCollectionBase::BaseRemove)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x27aac64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Specialized::NameObjectCollectionBase>::get(),
                            "BaseRemove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Specialized::NameObjectCollectionBase.BaseGet
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Collections::Specialized::NameObjectCollectionBase::*)(::StringW)>(&System::Collections::Specialized::NameObjectCollectionBase::BaseGet)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x27aa82c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Specialized::NameObjectCollectionBase>::get(),
                            "BaseGet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Specialized::NameObjectCollectionBase.BaseSet
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Specialized::NameObjectCollectionBase::*)(::StringW, ::bs_hook::Il2CppWrapperType)>(&System::Collections::Specialized::NameObjectCollectionBase::BaseSet)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x27aabac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Specialized::NameObjectCollectionBase>::get(),
                            "BaseSet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Specialized::NameObjectCollectionBase.BaseGet
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Collections::Specialized::NameObjectCollectionBase::*)(int32_t)>(&System::Collections::Specialized::NameObjectCollectionBase::BaseGet)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x27aaf14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Specialized::NameObjectCollectionBase>::get(),
                            "BaseGet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Specialized::NameObjectCollectionBase.BaseGetKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Collections::Specialized::NameObjectCollectionBase::*)(int32_t)>(&System::Collections::Specialized::NameObjectCollectionBase::BaseGetKey)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x27ab038;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Specialized::NameObjectCollectionBase>::get(),
                            "BaseGetKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Specialized::NameObjectCollectionBase.GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator (System::Collections::Specialized::NameObjectCollectionBase::*)()>(&System::Collections::Specialized::NameObjectCollectionBase::GetEnumerator)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x27ae69c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::Specialized::NameObjectCollectionBase),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Specialized::NameObjectCollectionBase>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Specialized::NameObjectCollectionBase.get_Count
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Collections::Specialized::NameObjectCollectionBase::*)()>(&System::Collections::Specialized::NameObjectCollectionBase::get_Count)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x27ae73c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::Specialized::NameObjectCollectionBase),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Specialized::NameObjectCollectionBase>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Specialized::NameObjectCollectionBase.System_Collections_ICollection_CopyTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Specialized::NameObjectCollectionBase::*)(System::Array, int32_t)>(&System::Collections::Specialized::NameObjectCollectionBase::System_Collections_ICollection_CopyTo)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x27ae760;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Specialized::NameObjectCollectionBase>::get(),
                            "System.Collections.ICollection.CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Array>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Specialized::NameObjectCollectionBase.System_Collections_ICollection_get_SyncRoot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Collections::Specialized::NameObjectCollectionBase::*)()>(&System::Collections::Specialized::NameObjectCollectionBase::System_Collections_ICollection_get_SyncRoot)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x27aea7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Specialized::NameObjectCollectionBase>::get(),
                            "System.Collections.ICollection.get_SyncRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Specialized::NameObjectCollectionBase.System_Collections_ICollection_get_IsSynchronized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::Specialized::NameObjectCollectionBase::*)()>(&System::Collections::Specialized::NameObjectCollectionBase::System_Collections_ICollection_get_IsSynchronized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27aeaf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Specialized::NameObjectCollectionBase>::get(),
                            "System.Collections.ICollection.get_IsSynchronized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::ICollection
constexpr  System::Collections::Specialized::NameObjectCollectionBase::operator System::Collections::ICollection() const noexcept {
return System::Collections::ICollection(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerable
constexpr  System::Collections::Specialized::NameObjectCollectionBase::operator System::Collections::IEnumerable() const noexcept {
return System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr  System::Collections::Specialized::NameObjectCollectionBase::operator System::Runtime::Serialization::ISerializable() const noexcept {
return System::Runtime::Serialization::ISerializable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Runtime::Serialization::IDeserializationCallback
constexpr  System::Collections::Specialized::NameObjectCollectionBase::operator System::Runtime::Serialization::IDeserializationCallback() const noexcept {
return System::Runtime::Serialization::IDeserializationCallback(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Specialized::NameObjectCollectionBase::__set__readOnly(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Collections::Specialized::NameObjectCollectionBase::__get__readOnly() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Specialized::NameObjectCollectionBase::__set__entriesArray(System::Collections::ArrayList value)  {
::cordl_internals::setInstanceField<System::Collections::ArrayList, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::ArrayList>(value));
}
constexpr System::Collections::ArrayList System::Collections::Specialized::NameObjectCollectionBase::__get__entriesArray() const {
return ::cordl_internals::getInstanceField<System::Collections::ArrayList, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Specialized::NameObjectCollectionBase::__set__keyComparer(System::Collections::IEqualityComparer value)  {
::cordl_internals::setInstanceField<System::Collections::IEqualityComparer, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::IEqualityComparer>(value));
}
constexpr System::Collections::IEqualityComparer System::Collections::Specialized::NameObjectCollectionBase::__get__keyComparer() const {
return ::cordl_internals::getInstanceField<System::Collections::IEqualityComparer, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Specialized::NameObjectCollectionBase::__set__entriesTable(System::Collections::Hashtable value)  {
::cordl_internals::setInstanceField<System::Collections::Hashtable, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Hashtable>(value));
}
constexpr System::Collections::Hashtable System::Collections::Specialized::NameObjectCollectionBase::__get__entriesTable() const {
return ::cordl_internals::getInstanceField<System::Collections::Hashtable, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Specialized::NameObjectCollectionBase::__set__nullKeyEntry(System::Collections::Specialized::System__Collections__Specialized__NameObjectCollectionBase__NameObjectEntry value)  {
::cordl_internals::setInstanceField<System::Collections::Specialized::System__Collections__Specialized__NameObjectCollectionBase__NameObjectEntry, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Specialized::System__Collections__Specialized__NameObjectCollectionBase__NameObjectEntry>(value));
}
constexpr System::Collections::Specialized::System__Collections__Specialized__NameObjectCollectionBase__NameObjectEntry System::Collections::Specialized::NameObjectCollectionBase::__get__nullKeyEntry() const {
return ::cordl_internals::getInstanceField<System::Collections::Specialized::System__Collections__Specialized__NameObjectCollectionBase__NameObjectEntry, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Specialized::NameObjectCollectionBase::__set__serializationInfo(System::Runtime::Serialization::SerializationInfo value)  {
::cordl_internals::setInstanceField<System::Runtime::Serialization::SerializationInfo, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::Serialization::SerializationInfo>(value));
}
constexpr System::Runtime::Serialization::SerializationInfo System::Collections::Specialized::NameObjectCollectionBase::__get__serializationInfo() const {
return ::cordl_internals::getInstanceField<System::Runtime::Serialization::SerializationInfo, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Specialized::NameObjectCollectionBase::__set__version(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Collections::Specialized::NameObjectCollectionBase::__get__version() const {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Specialized::NameObjectCollectionBase::__set__syncRoot(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType System::Collections::Specialized::NameObjectCollectionBase::__get__syncRoot() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void System::Collections::Specialized::NameObjectCollectionBase::__set_defaultComparer(System::StringComparer value)  {
::cordl_internals::setStaticField<System::StringComparer, "defaultComparer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Specialized::NameObjectCollectionBase>::get>(std::forward<System::StringComparer>(value));
}
 System::StringComparer System::Collections::Specialized::NameObjectCollectionBase::__get_defaultComparer()  {
return ::cordl_internals::getStaticField<System::StringComparer, "defaultComparer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Specialized::NameObjectCollectionBase>::get>();
}
// Ctor Parameters []
 System::Collections::Specialized::NameObjectCollectionBase::NameObjectCollectionBase()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<NameObjectCollectionBase>())) {}
 void System::Collections::Specialized::NameObjectCollectionBase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Specialized::NameObjectCollectionBase>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "equalityComparer", ty: "System::Collections::IEqualityComparer", modifiers: "", def_value: None }]
 System::Collections::Specialized::NameObjectCollectionBase::NameObjectCollectionBase(System::Collections::IEqualityComparer equalityComparer)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<NameObjectCollectionBase>(equalityComparer))) {}
 void System::Collections::Specialized::NameObjectCollectionBase::_ctor(System::Collections::IEqualityComparer equalityComparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Specialized::NameObjectCollectionBase>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, equalityComparer);
}
// Ctor Parameters [CppParam { name: "capacity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "equalityComparer", ty: "System::Collections::IEqualityComparer", modifiers: "", def_value: None }]
 System::Collections::Specialized::NameObjectCollectionBase::NameObjectCollectionBase(int32_t capacity, System::Collections::IEqualityComparer equalityComparer)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<NameObjectCollectionBase>(capacity, equalityComparer))) {}
 void System::Collections::Specialized::NameObjectCollectionBase::_ctor(int32_t capacity, System::Collections::IEqualityComparer equalityComparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Specialized::NameObjectCollectionBase>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, capacity, equalityComparer);
}
// Ctor Parameters [CppParam { name: "capacity", ty: "int32_t", modifiers: "", def_value: None }]
 System::Collections::Specialized::NameObjectCollectionBase::NameObjectCollectionBase(int32_t capacity)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<NameObjectCollectionBase>(capacity))) {}
 void System::Collections::Specialized::NameObjectCollectionBase::_ctor(int32_t capacity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Specialized::NameObjectCollectionBase>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, capacity);
}
// Ctor Parameters [CppParam { name: "dummy", ty: "System::DBNull", modifiers: "", def_value: None }]
 System::Collections::Specialized::NameObjectCollectionBase::NameObjectCollectionBase(System::DBNull dummy)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<NameObjectCollectionBase>(dummy))) {}
 void System::Collections::Specialized::NameObjectCollectionBase::_ctor(System::DBNull dummy)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Specialized::NameObjectCollectionBase>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DBNull>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, dummy);
}
// Ctor Parameters [CppParam { name: "info", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
 System::Collections::Specialized::NameObjectCollectionBase::NameObjectCollectionBase(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<NameObjectCollectionBase>(info, context))) {}
 void System::Collections::Specialized::NameObjectCollectionBase::_ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Specialized::NameObjectCollectionBase>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, info, context);
}
 void System::Collections::Specialized::NameObjectCollectionBase::GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Specialized::NameObjectCollectionBase>::get(),
                            "GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, info, context);
}
 void System::Collections::Specialized::NameObjectCollectionBase::OnDeserialization(::bs_hook::Il2CppWrapperType sender)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Specialized::NameObjectCollectionBase>::get(),
                            "OnDeserialization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sender);
}
 void System::Collections::Specialized::NameObjectCollectionBase::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Specialized::NameObjectCollectionBase>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Collections::Specialized::NameObjectCollectionBase::Reset(int32_t capacity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Specialized::NameObjectCollectionBase>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, capacity);
}
 System::Collections::Specialized::System__Collections__Specialized__NameObjectCollectionBase__NameObjectEntry System::Collections::Specialized::NameObjectCollectionBase::FindEntry(::StringW key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Specialized::NameObjectCollectionBase>::get(),
                            "FindEntry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Specialized::System__Collections__Specialized__NameObjectCollectionBase__NameObjectEntry, false>(const_cast<void*>(instance), ___internal_method, key);
}
 bool System::Collections::Specialized::NameObjectCollectionBase::get_IsReadOnly()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Specialized::NameObjectCollectionBase>::get(),
                            "get_IsReadOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Collections::Specialized::NameObjectCollectionBase::BaseAdd(::StringW name, ::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Specialized::NameObjectCollectionBase>::get(),
                            "BaseAdd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, name, value);
}
 void System::Collections::Specialized::NameObjectCollectionBase::BaseRemove(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Specialized::NameObjectCollectionBase>::get(),
                            "BaseRemove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, name);
}
 ::bs_hook::Il2CppWrapperType System::Collections::Specialized::NameObjectCollectionBase::BaseGet(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Specialized::NameObjectCollectionBase>::get(),
                            "BaseGet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, name);
}
 void System::Collections::Specialized::NameObjectCollectionBase::BaseSet(::StringW name, ::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Specialized::NameObjectCollectionBase>::get(),
                            "BaseSet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, name, value);
}
 ::bs_hook::Il2CppWrapperType System::Collections::Specialized::NameObjectCollectionBase::BaseGet(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Specialized::NameObjectCollectionBase>::get(),
                            "BaseGet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, index);
}
 ::StringW System::Collections::Specialized::NameObjectCollectionBase::BaseGetKey(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Specialized::NameObjectCollectionBase>::get(),
                            "BaseGetKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, index);
}
 System::Collections::IEnumerator System::Collections::Specialized::NameObjectCollectionBase::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Specialized::NameObjectCollectionBase>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Collections::Specialized::NameObjectCollectionBase::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Specialized::NameObjectCollectionBase>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Collections::Specialized::NameObjectCollectionBase::System_Collections_ICollection_CopyTo(System::Array array, int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Specialized::NameObjectCollectionBase>::get(),
                            "System.Collections.ICollection.CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Array>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, array, index);
}
 ::bs_hook::Il2CppWrapperType System::Collections::Specialized::NameObjectCollectionBase::System_Collections_ICollection_get_SyncRoot()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Specialized::NameObjectCollectionBase>::get(),
                            "System.Collections.ICollection.get_SyncRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Collections::Specialized::NameObjectCollectionBase::System_Collections_ICollection_get_IsSynchronized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Specialized::NameObjectCollectionBase>::get(),
                            "System.Collections.ICollection.get_IsSynchronized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
