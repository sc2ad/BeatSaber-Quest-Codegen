#pragma once
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithLivestreamingApplicationStatus_def.hpp"
#include "Oculus/Platform/Models/zzzz__LivestreamingApplicationStatus_def.hpp"
//  Writing Method size for method: Oculus::Platform::MessageWithLivestreamingApplicationStatus._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::MessageWithLivestreamingApplicationStatus::*)(::cordl_internals::intptr_t)>(&Oculus::Platform::MessageWithLivestreamingApplicationStatus::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2581df8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithLivestreamingApplicationStatus>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::MessageWithLivestreamingApplicationStatus.GetLivestreamingApplicationStatus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::LivestreamingApplicationStatus (Oculus::Platform::MessageWithLivestreamingApplicationStatus::*)()>(&Oculus::Platform::MessageWithLivestreamingApplicationStatus::GetLivestreamingApplicationStatus)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2581e50;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Oculus::Platform::MessageWithLivestreamingApplicationStatus),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithLivestreamingApplicationStatus>::get(),
                                  49
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::MessageWithLivestreamingApplicationStatus.GetDataFromMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::LivestreamingApplicationStatus (Oculus::Platform::MessageWithLivestreamingApplicationStatus::*)(::cordl_internals::intptr_t)>(&Oculus::Platform::MessageWithLivestreamingApplicationStatus::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2581e8c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Oculus::Platform::MessageWithLivestreamingApplicationStatus),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithLivestreamingApplicationStatus>::get(),
                                  89
                                ));
    return ___internal_method;
  }
};
 Oculus::Platform::MessageWithLivestreamingApplicationStatus Oculus::Platform::MessageWithLivestreamingApplicationStatus::New_ctor(::cordl_internals::intptr_t c_message)  {
Oculus::Platform::MessageWithLivestreamingApplicationStatus o{THROW_UNLESS(::il2cpp_utils::New<Oculus::Platform::MessageWithLivestreamingApplicationStatus>(c_message))};
return o;
}
 void Oculus::Platform::MessageWithLivestreamingApplicationStatus::_ctor(::cordl_internals::intptr_t c_message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithLivestreamingApplicationStatus>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, c_message);
}
 Oculus::Platform::Models::LivestreamingApplicationStatus Oculus::Platform::MessageWithLivestreamingApplicationStatus::GetLivestreamingApplicationStatus()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithLivestreamingApplicationStatus>::get(),
                            "GetLivestreamingApplicationStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Models::LivestreamingApplicationStatus, false>(const_cast<void*>(instance), ___internal_method);
}
 Oculus::Platform::Models::LivestreamingApplicationStatus Oculus::Platform::MessageWithLivestreamingApplicationStatus::GetDataFromMessage(::cordl_internals::intptr_t c_message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithLivestreamingApplicationStatus>::get(),
                            "GetDataFromMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Models::LivestreamingApplicationStatus, false>(const_cast<void*>(instance), ___internal_method, c_message);
}
