#pragma once
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithGroupPresenceJoinIntent_def.hpp"
#include "Oculus/Platform/Models/zzzz__GroupPresenceJoinIntent_def.hpp"
//  Writing Method size for method: Oculus::Platform::MessageWithGroupPresenceJoinIntent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::MessageWithGroupPresenceJoinIntent::*)(::cordl_internals::intptr_t)>(&Oculus::Platform::MessageWithGroupPresenceJoinIntent::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x257e690;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithGroupPresenceJoinIntent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::MessageWithGroupPresenceJoinIntent.GetGroupPresenceJoinIntent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::GroupPresenceJoinIntent (Oculus::Platform::MessageWithGroupPresenceJoinIntent::*)()>(&Oculus::Platform::MessageWithGroupPresenceJoinIntent::GetGroupPresenceJoinIntent)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x25812d0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Oculus::Platform::MessageWithGroupPresenceJoinIntent),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithGroupPresenceJoinIntent>::get(),
                                  36
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::MessageWithGroupPresenceJoinIntent.GetDataFromMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::GroupPresenceJoinIntent (Oculus::Platform::MessageWithGroupPresenceJoinIntent::*)(::cordl_internals::intptr_t)>(&Oculus::Platform::MessageWithGroupPresenceJoinIntent::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x258130c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Oculus::Platform::MessageWithGroupPresenceJoinIntent),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithGroupPresenceJoinIntent>::get(),
                                  89
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 Oculus::Platform::MessageWithGroupPresenceJoinIntent::MessageWithGroupPresenceJoinIntent(::cordl_internals::intptr_t c_message)  : Oculus::Platform::Message_1<Oculus::Platform::Models::GroupPresenceJoinIntent>(THROW_UNLESS(::il2cpp_utils::New<MessageWithGroupPresenceJoinIntent>(c_message))) {}
 void Oculus::Platform::MessageWithGroupPresenceJoinIntent::_ctor(::cordl_internals::intptr_t c_message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithGroupPresenceJoinIntent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, c_message);
}
 Oculus::Platform::Models::GroupPresenceJoinIntent Oculus::Platform::MessageWithGroupPresenceJoinIntent::GetGroupPresenceJoinIntent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithGroupPresenceJoinIntent>::get(),
                            "GetGroupPresenceJoinIntent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Models::GroupPresenceJoinIntent, false>(const_cast<void*>(instance), ___internal_method);
}
 Oculus::Platform::Models::GroupPresenceJoinIntent Oculus::Platform::MessageWithGroupPresenceJoinIntent::GetDataFromMessage(::cordl_internals::intptr_t c_message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithGroupPresenceJoinIntent>::get(),
                            "GetDataFromMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Models::GroupPresenceJoinIntent, false>(const_cast<void*>(instance), ___internal_method, c_message);
}
