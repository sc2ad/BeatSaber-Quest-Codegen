#pragma once
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithGroupPresenceLeaveIntent_def.hpp"
#include "Oculus/Platform/Models/zzzz__GroupPresenceLeaveIntent_def.hpp"
//  Writing Method size for method: Oculus::Platform::MessageWithGroupPresenceLeaveIntent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::MessageWithGroupPresenceLeaveIntent::*)(::cordl_internals::intptr_t)>(&Oculus::Platform::MessageWithGroupPresenceLeaveIntent::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x257e6e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithGroupPresenceLeaveIntent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::MessageWithGroupPresenceLeaveIntent.GetGroupPresenceLeaveIntent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::GroupPresenceLeaveIntent (Oculus::Platform::MessageWithGroupPresenceLeaveIntent::*)()>(&Oculus::Platform::MessageWithGroupPresenceLeaveIntent::GetGroupPresenceLeaveIntent)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x25813a8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Oculus::Platform::MessageWithGroupPresenceLeaveIntent),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithGroupPresenceLeaveIntent>::get(),
                                  37
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::MessageWithGroupPresenceLeaveIntent.GetDataFromMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::GroupPresenceLeaveIntent (Oculus::Platform::MessageWithGroupPresenceLeaveIntent::*)(::cordl_internals::intptr_t)>(&Oculus::Platform::MessageWithGroupPresenceLeaveIntent::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x25813e4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Oculus::Platform::MessageWithGroupPresenceLeaveIntent),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithGroupPresenceLeaveIntent>::get(),
                                  89
                                ));
    return ___internal_method;
  }
};
 Oculus::Platform::MessageWithGroupPresenceLeaveIntent Oculus::Platform::MessageWithGroupPresenceLeaveIntent::New_ctor(::cordl_internals::intptr_t c_message)  {
Oculus::Platform::MessageWithGroupPresenceLeaveIntent o{THROW_UNLESS(::il2cpp_utils::New<Oculus::Platform::MessageWithGroupPresenceLeaveIntent>(c_message))};
return o;
}
 void Oculus::Platform::MessageWithGroupPresenceLeaveIntent::_ctor(::cordl_internals::intptr_t c_message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithGroupPresenceLeaveIntent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, c_message);
}
 Oculus::Platform::Models::GroupPresenceLeaveIntent Oculus::Platform::MessageWithGroupPresenceLeaveIntent::GetGroupPresenceLeaveIntent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithGroupPresenceLeaveIntent>::get(),
                            "GetGroupPresenceLeaveIntent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Models::GroupPresenceLeaveIntent, false>(const_cast<void*>(instance), ___internal_method);
}
 Oculus::Platform::Models::GroupPresenceLeaveIntent Oculus::Platform::MessageWithGroupPresenceLeaveIntent::GetDataFromMessage(::cordl_internals::intptr_t c_message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithGroupPresenceLeaveIntent>::get(),
                            "GetDataFromMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Models::GroupPresenceLeaveIntent, false>(const_cast<void*>(instance), ___internal_method, c_message);
}
