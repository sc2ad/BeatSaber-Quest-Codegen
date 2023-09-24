#pragma once
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithNetSyncVoipAttenuationValueList_def.hpp"
#include "Oculus/Platform/Models/zzzz__NetSyncVoipAttenuationValueList_def.hpp"
//  Writing Method size for method: Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList::*)(::cordl_internals::intptr_t)>(&Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2582aa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList.GetNetSyncVoipAttenuationValueList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::NetSyncVoipAttenuationValueList (Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList::*)()>(&Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList::GetNetSyncVoipAttenuationValueList)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2582b00;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList>::get(),
                                  63
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList.GetDataFromMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::NetSyncVoipAttenuationValueList (Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList::*)(::cordl_internals::intptr_t)>(&Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2582b3c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList>::get(),
                                  89
                                ));
    return ___internal_method;
  }
};
 Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList::New_ctor(::cordl_internals::intptr_t c_message)  {
Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList o{THROW_UNLESS(::il2cpp_utils::New<Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList>(c_message))};
return o;
}
 void Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList::_ctor(::cordl_internals::intptr_t c_message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, c_message);
}
 Oculus::Platform::Models::NetSyncVoipAttenuationValueList Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList::GetNetSyncVoipAttenuationValueList()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList>::get(),
                            "GetNetSyncVoipAttenuationValueList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Models::NetSyncVoipAttenuationValueList, false>(const_cast<void*>(instance), ___internal_method);
}
 Oculus::Platform::Models::NetSyncVoipAttenuationValueList Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList::GetDataFromMessage(::cordl_internals::intptr_t c_message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList>::get(),
                            "GetDataFromMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Models::NetSyncVoipAttenuationValueList, false>(const_cast<void*>(instance), ___internal_method, c_message);
}
