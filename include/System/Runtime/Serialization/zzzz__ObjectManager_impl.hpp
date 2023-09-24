#pragma once
#include "System/Runtime/Serialization/zzzz__ObjectManager_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/Reflection/zzzz__RuntimeConstructorInfo_def.hpp"
#include "System/zzzz__RuntimeType_def.hpp"
#include "System/Runtime/Serialization/zzzz__DeserializationEventHandler_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__FixupHolder_def.hpp"
#include "System/Runtime/Serialization/zzzz__ObjectHolderList_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationEventHandler_def.hpp"
#include "System/Runtime/Serialization/zzzz__ObjectHolder_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISurrogateSelector_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
//  Writing Method size for method: System::Runtime::Serialization::ObjectManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::ObjectManager::*)(System::Runtime::Serialization::ISurrogateSelector, System::Runtime::Serialization::StreamingContext, bool, bool)>(&System::Runtime::Serialization::ObjectManager::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x234c9e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::ObjectManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::ISurrogateSelector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::ObjectManager.CanCallGetType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Serialization::ObjectManager::*)(::bs_hook::Il2CppWrapperType)>(&System::Runtime::Serialization::ObjectManager::CanCallGetType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x234ca64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::ObjectManager>::get(),
                            "CanCallGetType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::ObjectManager.set_TopObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::ObjectManager::*)(::bs_hook::Il2CppWrapperType)>(&System::Runtime::Serialization::ObjectManager::set_TopObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x234ca6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::ObjectManager>::get(),
                            "set_TopObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::ObjectManager.get_TopObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Runtime::Serialization::ObjectManager::*)()>(&System::Runtime::Serialization::ObjectManager::get_TopObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x234ca74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::ObjectManager>::get(),
                            "get_TopObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::ObjectManager.get_SpecialFixupObjects
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Serialization::ObjectHolderList (System::Runtime::Serialization::ObjectManager::*)()>(&System::Runtime::Serialization::ObjectManager::get_SpecialFixupObjects)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x234ca7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::ObjectManager>::get(),
                            "get_SpecialFixupObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::ObjectManager.FindObjectHolder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Serialization::ObjectHolder (System::Runtime::Serialization::ObjectManager::*)(int64_t)>(&System::Runtime::Serialization::ObjectManager::FindObjectHolder)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x234caf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::ObjectManager>::get(),
                            "FindObjectHolder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::ObjectManager.FindOrCreateObjectHolder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Serialization::ObjectHolder (System::Runtime::Serialization::ObjectManager::*)(int64_t)>(&System::Runtime::Serialization::ObjectManager::FindOrCreateObjectHolder)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x234cb48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::ObjectManager>::get(),
                            "FindOrCreateObjectHolder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::ObjectManager.AddObjectHolder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::ObjectManager::*)(System::Runtime::Serialization::ObjectHolder)>(&System::Runtime::Serialization::ObjectManager::AddObjectHolder)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x234cc20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::ObjectManager>::get(),
                            "AddObjectHolder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::ObjectHolder>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::ObjectManager.GetCompletionInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Serialization::ObjectManager::*)(System::Runtime::Serialization::FixupHolder, ByRef<System::Runtime::Serialization::ObjectHolder>, ByRef<::bs_hook::Il2CppWrapperType>, bool)>(&System::Runtime::Serialization::ObjectManager::GetCompletionInfo)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x234cd4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::ObjectManager>::get(),
                            "GetCompletionInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::FixupHolder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Runtime::Serialization::ObjectHolder>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::ObjectManager.FixupSpecialObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::ObjectManager::*)(System::Runtime::Serialization::ObjectHolder)>(&System::Runtime::Serialization::ObjectManager::FixupSpecialObject)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x234d054;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::ObjectManager>::get(),
                            "FixupSpecialObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::ObjectHolder>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::ObjectManager.ResolveObjectReference
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Serialization::ObjectManager::*)(System::Runtime::Serialization::ObjectHolder)>(&System::Runtime::Serialization::ObjectManager::ResolveObjectReference)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x234de18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::ObjectManager>::get(),
                            "ResolveObjectReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::ObjectHolder>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::ObjectManager.DoValueTypeFixup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Serialization::ObjectManager::*)(System::Reflection::FieldInfo, System::Runtime::Serialization::ObjectHolder, ::bs_hook::Il2CppWrapperType)>(&System::Runtime::Serialization::ObjectManager::DoValueTypeFixup)> {
  constexpr static std::size_t size = 0x560;
  constexpr static std::size_t addrs = 0x234d7e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::ObjectManager>::get(),
                            "DoValueTypeFixup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::FieldInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::ObjectHolder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::ObjectManager.CompleteObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::ObjectManager::*)(System::Runtime::Serialization::ObjectHolder, bool)>(&System::Runtime::Serialization::ObjectManager::CompleteObject)> {
  constexpr static std::size_t size = 0x620;
  constexpr static std::size_t addrs = 0x234e0bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::ObjectManager>::get(),
                            "CompleteObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::ObjectHolder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::ObjectManager.DoNewlyRegisteredObjectFixups
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::ObjectManager::*)(System::Runtime::Serialization::ObjectHolder)>(&System::Runtime::Serialization::ObjectManager::DoNewlyRegisteredObjectFixups)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x234dd40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::ObjectManager>::get(),
                            "DoNewlyRegisteredObjectFixups",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::ObjectHolder>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::ObjectManager.GetObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Runtime::Serialization::ObjectManager::*)(int64_t)>(&System::Runtime::Serialization::ObjectManager::GetObject)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x234e8e0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Runtime::Serialization::ObjectManager),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::ObjectManager>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::ObjectManager.RegisterString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::ObjectManager::*)(::StringW, int64_t, System::Runtime::Serialization::SerializationInfo, int64_t, System::Reflection::MemberInfo)>(&System::Runtime::Serialization::ObjectManager::RegisterString)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x234e994;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::ObjectManager>::get(),
                            "RegisterString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MemberInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::ObjectManager.RegisterObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::ObjectManager::*)(::bs_hook::Il2CppWrapperType, int64_t, System::Runtime::Serialization::SerializationInfo, int64_t, System::Reflection::MemberInfo, ::ArrayW<int32_t>)>(&System::Runtime::Serialization::ObjectManager::RegisterObject)> {
  constexpr static std::size_t size = 0x5bc;
  constexpr static std::size_t addrs = 0x234eb78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::ObjectManager>::get(),
                            "RegisterObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MemberInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::ObjectManager.CompleteISerializableObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::ObjectManager::*)(::bs_hook::Il2CppWrapperType, System::Runtime::Serialization::SerializationInfo, System::Runtime::Serialization::StreamingContext)>(&System::Runtime::Serialization::ObjectManager::CompleteISerializableObject)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x234d4f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::ObjectManager>::get(),
                            "CompleteISerializableObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::ObjectManager.GetConstructor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::RuntimeConstructorInfo (*)(System::RuntimeType)>(&System::Runtime::Serialization::ObjectManager::GetConstructor)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x234f4bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::ObjectManager>::get(),
                            "GetConstructor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::ObjectManager.DoFixups
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::ObjectManager::*)()>(&System::Runtime::Serialization::ObjectManager::DoFixups)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x234f5f4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Runtime::Serialization::ObjectManager),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::ObjectManager>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::ObjectManager.RegisterFixup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::ObjectManager::*)(System::Runtime::Serialization::FixupHolder, int64_t, int64_t)>(&System::Runtime::Serialization::ObjectManager::RegisterFixup)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x234fa70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::ObjectManager>::get(),
                            "RegisterFixup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::FixupHolder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::ObjectManager.RecordFixup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::ObjectManager::*)(int64_t, System::Reflection::MemberInfo, int64_t)>(&System::Runtime::Serialization::ObjectManager::RecordFixup)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x234fc80;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Runtime::Serialization::ObjectManager),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::ObjectManager>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::ObjectManager.RecordDelayedFixup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::ObjectManager::*)(int64_t, ::StringW, int64_t)>(&System::Runtime::Serialization::ObjectManager::RecordDelayedFixup)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x234ff5c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Runtime::Serialization::ObjectManager),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::ObjectManager>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::ObjectManager.RecordArrayElementFixup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::ObjectManager::*)(int64_t, ::ArrayW<int32_t>, int64_t)>(&System::Runtime::Serialization::ObjectManager::RecordArrayElementFixup)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x23500c4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Runtime::Serialization::ObjectManager),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::ObjectManager>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::ObjectManager.RaiseDeserializationEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::ObjectManager::*)()>(&System::Runtime::Serialization::ObjectManager::RaiseDeserializationEvent)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x235022c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Runtime::Serialization::ObjectManager),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::ObjectManager>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::ObjectManager.AddOnDeserialization
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::ObjectManager::*)(System::Runtime::Serialization::DeserializationEventHandler)>(&System::Runtime::Serialization::ObjectManager::AddOnDeserialization)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2350278;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Runtime::Serialization::ObjectManager),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::ObjectManager>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::ObjectManager.AddOnDeserialized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::ObjectManager::*)(::bs_hook::Il2CppWrapperType)>(&System::Runtime::Serialization::ObjectManager::AddOnDeserialized)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x23502f8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Runtime::Serialization::ObjectManager),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::ObjectManager>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::ObjectManager.RaiseOnDeserializedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::ObjectManager::*)(::bs_hook::Il2CppWrapperType)>(&System::Runtime::Serialization::ObjectManager::RaiseOnDeserializedEvent)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2350388;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Runtime::Serialization::ObjectManager),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::ObjectManager>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::ObjectManager.RaiseOnDeserializingEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::ObjectManager::*)(::bs_hook::Il2CppWrapperType)>(&System::Runtime::Serialization::ObjectManager::RaiseOnDeserializingEvent)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x235040c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::ObjectManager>::get(),
                            "RaiseOnDeserializingEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Runtime::Serialization::ObjectManager::__set_m_onDeserializationHandler(System::Runtime::Serialization::DeserializationEventHandler value)  {
::cordl_internals::setInstanceField<System::Runtime::Serialization::DeserializationEventHandler, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::Serialization::DeserializationEventHandler>(value));
}
constexpr System::Runtime::Serialization::DeserializationEventHandler System::Runtime::Serialization::ObjectManager::__get_m_onDeserializationHandler() const {
return ::cordl_internals::getInstanceField<System::Runtime::Serialization::DeserializationEventHandler, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Serialization::ObjectManager::__set_m_onDeserializedHandler(System::Runtime::Serialization::SerializationEventHandler value)  {
::cordl_internals::setInstanceField<System::Runtime::Serialization::SerializationEventHandler, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::Serialization::SerializationEventHandler>(value));
}
constexpr System::Runtime::Serialization::SerializationEventHandler System::Runtime::Serialization::ObjectManager::__get_m_onDeserializedHandler() const {
return ::cordl_internals::getInstanceField<System::Runtime::Serialization::SerializationEventHandler, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Serialization::ObjectManager::__set_m_objects(::ArrayW<System::Runtime::Serialization::ObjectHolder> value)  {
::cordl_internals::setInstanceField<::ArrayW<System::Runtime::Serialization::ObjectHolder>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<System::Runtime::Serialization::ObjectHolder>>(value));
}
constexpr ::ArrayW<System::Runtime::Serialization::ObjectHolder> System::Runtime::Serialization::ObjectManager::__get_m_objects() const {
return ::cordl_internals::getInstanceField<::ArrayW<System::Runtime::Serialization::ObjectHolder>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Serialization::ObjectManager::__set_m_topObject(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType System::Runtime::Serialization::ObjectManager::__get_m_topObject() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Serialization::ObjectManager::__set_m_specialFixupObjects(System::Runtime::Serialization::ObjectHolderList value)  {
::cordl_internals::setInstanceField<System::Runtime::Serialization::ObjectHolderList, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::Serialization::ObjectHolderList>(value));
}
constexpr System::Runtime::Serialization::ObjectHolderList System::Runtime::Serialization::ObjectManager::__get_m_specialFixupObjects() const {
return ::cordl_internals::getInstanceField<System::Runtime::Serialization::ObjectHolderList, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Serialization::ObjectManager::__set_m_fixupCount(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t System::Runtime::Serialization::ObjectManager::__get_m_fixupCount() const {
return ::cordl_internals::getInstanceField<int64_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Serialization::ObjectManager::__set_m_selector(System::Runtime::Serialization::ISurrogateSelector value)  {
::cordl_internals::setInstanceField<System::Runtime::Serialization::ISurrogateSelector, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::Serialization::ISurrogateSelector>(value));
}
constexpr System::Runtime::Serialization::ISurrogateSelector System::Runtime::Serialization::ObjectManager::__get_m_selector() const {
return ::cordl_internals::getInstanceField<System::Runtime::Serialization::ISurrogateSelector, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Serialization::ObjectManager::__set_m_context(System::Runtime::Serialization::StreamingContext value)  {
::cordl_internals::setInstanceField<System::Runtime::Serialization::StreamingContext, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::Serialization::StreamingContext>(value));
}
constexpr System::Runtime::Serialization::StreamingContext System::Runtime::Serialization::ObjectManager::__get_m_context() const {
return ::cordl_internals::getInstanceField<System::Runtime::Serialization::StreamingContext, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Runtime::Serialization::ObjectManager System::Runtime::Serialization::ObjectManager::New_ctor(System::Runtime::Serialization::ISurrogateSelector selector, System::Runtime::Serialization::StreamingContext context, bool checkSecurity, bool isCrossAppDomain)  {
System::Runtime::Serialization::ObjectManager o{THROW_UNLESS(::il2cpp_utils::New<System::Runtime::Serialization::ObjectManager>(selector, context, checkSecurity, isCrossAppDomain))};
return o;
}
 void System::Runtime::Serialization::ObjectManager::_ctor(System::Runtime::Serialization::ISurrogateSelector selector, System::Runtime::Serialization::StreamingContext context, bool checkSecurity, bool isCrossAppDomain)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::ObjectManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::ISurrogateSelector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, selector, context, checkSecurity, isCrossAppDomain);
}
 bool System::Runtime::Serialization::ObjectManager::CanCallGetType(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::ObjectManager>::get(),
                            "CanCallGetType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 void System::Runtime::Serialization::ObjectManager::set_TopObject(::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::ObjectManager>::get(),
                            "set_TopObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::bs_hook::Il2CppWrapperType System::Runtime::Serialization::ObjectManager::get_TopObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::ObjectManager>::get(),
                            "get_TopObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Runtime::Serialization::ObjectHolderList System::Runtime::Serialization::ObjectManager::get_SpecialFixupObjects()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::ObjectManager>::get(),
                            "get_SpecialFixupObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Serialization::ObjectHolderList, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Runtime::Serialization::ObjectHolder System::Runtime::Serialization::ObjectManager::FindObjectHolder(int64_t objectID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::ObjectManager>::get(),
                            "FindObjectHolder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Serialization::ObjectHolder, false>(const_cast<void*>(instance), ___internal_method, objectID);
}
 System::Runtime::Serialization::ObjectHolder System::Runtime::Serialization::ObjectManager::FindOrCreateObjectHolder(int64_t objectID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::ObjectManager>::get(),
                            "FindOrCreateObjectHolder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Serialization::ObjectHolder, false>(const_cast<void*>(instance), ___internal_method, objectID);
}
 void System::Runtime::Serialization::ObjectManager::AddObjectHolder(System::Runtime::Serialization::ObjectHolder holder)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::ObjectManager>::get(),
                            "AddObjectHolder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::ObjectHolder>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, holder);
}
 bool System::Runtime::Serialization::ObjectManager::GetCompletionInfo(System::Runtime::Serialization::FixupHolder fixup, ByRef<System::Runtime::Serialization::ObjectHolder> holder, ByRef<::bs_hook::Il2CppWrapperType> member, bool bThrowIfMissing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::ObjectManager>::get(),
                            "GetCompletionInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::FixupHolder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Runtime::Serialization::ObjectHolder>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, fixup, holder, member, bThrowIfMissing);
}
 void System::Runtime::Serialization::ObjectManager::FixupSpecialObject(System::Runtime::Serialization::ObjectHolder holder)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::ObjectManager>::get(),
                            "FixupSpecialObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::ObjectHolder>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, holder);
}
 bool System::Runtime::Serialization::ObjectManager::ResolveObjectReference(System::Runtime::Serialization::ObjectHolder holder)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::ObjectManager>::get(),
                            "ResolveObjectReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::ObjectHolder>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, holder);
}
 bool System::Runtime::Serialization::ObjectManager::DoValueTypeFixup(System::Reflection::FieldInfo memberToFix, System::Runtime::Serialization::ObjectHolder holder, ::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::ObjectManager>::get(),
                            "DoValueTypeFixup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::FieldInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::ObjectHolder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, memberToFix, holder, value);
}
 void System::Runtime::Serialization::ObjectManager::CompleteObject(System::Runtime::Serialization::ObjectHolder holder, bool bObjectFullyComplete)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::ObjectManager>::get(),
                            "CompleteObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::ObjectHolder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, holder, bObjectFullyComplete);
}
 void System::Runtime::Serialization::ObjectManager::DoNewlyRegisteredObjectFixups(System::Runtime::Serialization::ObjectHolder holder)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::ObjectManager>::get(),
                            "DoNewlyRegisteredObjectFixups",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::ObjectHolder>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, holder);
}
 ::bs_hook::Il2CppWrapperType System::Runtime::Serialization::ObjectManager::GetObject(int64_t objectID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::ObjectManager>::get(),
                            "GetObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, objectID);
}
 void System::Runtime::Serialization::ObjectManager::RegisterString(::StringW obj, int64_t objectID, System::Runtime::Serialization::SerializationInfo info, int64_t idOfContainingObj, System::Reflection::MemberInfo member)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::ObjectManager>::get(),
                            "RegisterString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MemberInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, obj, objectID, info, idOfContainingObj, member);
}
 void System::Runtime::Serialization::ObjectManager::RegisterObject(::bs_hook::Il2CppWrapperType obj, int64_t objectID, System::Runtime::Serialization::SerializationInfo info, int64_t idOfContainingObj, System::Reflection::MemberInfo member, ::ArrayW<int32_t> arrayIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::ObjectManager>::get(),
                            "RegisterObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MemberInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, obj, objectID, info, idOfContainingObj, member, arrayIndex);
}
 void System::Runtime::Serialization::ObjectManager::CompleteISerializableObject(::bs_hook::Il2CppWrapperType obj, System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::ObjectManager>::get(),
                            "CompleteISerializableObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, obj, info, context);
}
 System::Reflection::RuntimeConstructorInfo System::Runtime::Serialization::ObjectManager::GetConstructor(System::RuntimeType t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::ObjectManager>::get(),
                            "GetConstructor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::RuntimeConstructorInfo, false>(nullptr, ___internal_method, t);
}
 void System::Runtime::Serialization::ObjectManager::DoFixups()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::ObjectManager>::get(),
                            "DoFixups",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Runtime::Serialization::ObjectManager::RegisterFixup(System::Runtime::Serialization::FixupHolder fixup, int64_t objectToBeFixed, int64_t objectRequired)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::ObjectManager>::get(),
                            "RegisterFixup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::FixupHolder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, fixup, objectToBeFixed, objectRequired);
}
 void System::Runtime::Serialization::ObjectManager::RecordFixup(int64_t objectToBeFixed, System::Reflection::MemberInfo member, int64_t objectRequired)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::ObjectManager>::get(),
                            "RecordFixup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MemberInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, objectToBeFixed, member, objectRequired);
}
 void System::Runtime::Serialization::ObjectManager::RecordDelayedFixup(int64_t objectToBeFixed, ::StringW memberName, int64_t objectRequired)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::ObjectManager>::get(),
                            "RecordDelayedFixup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, objectToBeFixed, memberName, objectRequired);
}
 void System::Runtime::Serialization::ObjectManager::RecordArrayElementFixup(int64_t arrayToBeFixed, ::ArrayW<int32_t> indices, int64_t objectRequired)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::ObjectManager>::get(),
                            "RecordArrayElementFixup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, arrayToBeFixed, indices, objectRequired);
}
 void System::Runtime::Serialization::ObjectManager::RaiseDeserializationEvent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::ObjectManager>::get(),
                            "RaiseDeserializationEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Runtime::Serialization::ObjectManager::AddOnDeserialization(System::Runtime::Serialization::DeserializationEventHandler handler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::ObjectManager>::get(),
                            "AddOnDeserialization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::DeserializationEventHandler>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, handler);
}
 void System::Runtime::Serialization::ObjectManager::AddOnDeserialized(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::ObjectManager>::get(),
                            "AddOnDeserialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 void System::Runtime::Serialization::ObjectManager::RaiseOnDeserializedEvent(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::ObjectManager>::get(),
                            "RaiseOnDeserializedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 void System::Runtime::Serialization::ObjectManager::RaiseOnDeserializingEvent(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::ObjectManager>::get(),
                            "RaiseOnDeserializingEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, obj);
}
