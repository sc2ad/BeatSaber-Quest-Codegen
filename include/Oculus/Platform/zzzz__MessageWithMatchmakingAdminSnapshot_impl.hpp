#pragma once
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithMatchmakingAdminSnapshot_def.hpp"
#include "Oculus/Platform/Models/zzzz__MatchmakingAdminSnapshot_def.hpp"
//  Writing Method size for method: Oculus::Platform::MessageWithMatchmakingAdminSnapshot._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::MessageWithMatchmakingAdminSnapshot::*)(::cordl_internals::intptr_t)>(&Oculus::Platform::MessageWithMatchmakingAdminSnapshot::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x257ea58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithMatchmakingAdminSnapshot>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::MessageWithMatchmakingAdminSnapshot.GetMatchmakingAdminSnapshot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::MatchmakingAdminSnapshot (Oculus::Platform::MessageWithMatchmakingAdminSnapshot::*)()>(&Oculus::Platform::MessageWithMatchmakingAdminSnapshot::GetMatchmakingAdminSnapshot)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2582260;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Oculus::Platform::MessageWithMatchmakingAdminSnapshot),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithMatchmakingAdminSnapshot>::get(),
                                  53
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::MessageWithMatchmakingAdminSnapshot.GetDataFromMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::MatchmakingAdminSnapshot (Oculus::Platform::MessageWithMatchmakingAdminSnapshot::*)(::cordl_internals::intptr_t)>(&Oculus::Platform::MessageWithMatchmakingAdminSnapshot::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x258229c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Oculus::Platform::MessageWithMatchmakingAdminSnapshot),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithMatchmakingAdminSnapshot>::get(),
                                  89
                                ));
    return ___internal_method;
  }
};
 Oculus::Platform::MessageWithMatchmakingAdminSnapshot Oculus::Platform::MessageWithMatchmakingAdminSnapshot::New_ctor(::cordl_internals::intptr_t c_message)  {
Oculus::Platform::MessageWithMatchmakingAdminSnapshot o{THROW_UNLESS(::il2cpp_utils::New<Oculus::Platform::MessageWithMatchmakingAdminSnapshot>(c_message))};
return o;
}
 void Oculus::Platform::MessageWithMatchmakingAdminSnapshot::_ctor(::cordl_internals::intptr_t c_message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithMatchmakingAdminSnapshot>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, c_message);
}
 Oculus::Platform::Models::MatchmakingAdminSnapshot Oculus::Platform::MessageWithMatchmakingAdminSnapshot::GetMatchmakingAdminSnapshot()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithMatchmakingAdminSnapshot>::get(),
                            "GetMatchmakingAdminSnapshot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Models::MatchmakingAdminSnapshot, false>(const_cast<void*>(instance), ___internal_method);
}
 Oculus::Platform::Models::MatchmakingAdminSnapshot Oculus::Platform::MessageWithMatchmakingAdminSnapshot::GetDataFromMessage(::cordl_internals::intptr_t c_message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithMatchmakingAdminSnapshot>::get(),
                            "GetDataFromMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Models::MatchmakingAdminSnapshot, false>(const_cast<void*>(instance), ___internal_method, c_message);
}
