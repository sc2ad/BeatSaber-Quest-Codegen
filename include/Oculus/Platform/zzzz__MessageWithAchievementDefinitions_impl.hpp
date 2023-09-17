#pragma once
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
namespace {
#include "Oculus/Platform/zzzz__MessageWithAchievementDefinitions_def.hpp"
#include "Oculus/Platform/Models/zzzz__AchievementDefinitionList_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithAchievementDefinitions._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MessageWithAchievementDefinitions::*)(::cordl_internals::intptr_t)>(&::Oculus::Platform::MessageWithAchievementDefinitions::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x257dda0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithAchievementDefinitions>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithAchievementDefinitions.GetAchievementDefinitions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::AchievementDefinitionList (::Oculus::Platform::MessageWithAchievementDefinitions::*)()>(&::Oculus::Platform::MessageWithAchievementDefinitions::GetAchievementDefinitions)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x257fc30;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::MessageWithAchievementDefinitions),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithAchievementDefinitions>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithAchievementDefinitions.GetDataFromMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::AchievementDefinitionList (::Oculus::Platform::MessageWithAchievementDefinitions::*)(::cordl_internals::intptr_t)>(&::Oculus::Platform::MessageWithAchievementDefinitions::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x257fc6c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::MessageWithAchievementDefinitions),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithAchievementDefinitions>::get(),
                                  89
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::Oculus::Platform::MessageWithAchievementDefinitions::MessageWithAchievementDefinitions(::cordl_internals::intptr_t c_message)  : ::Oculus::Platform::Message_1<::Oculus::Platform::Models::AchievementDefinitionList>(THROW_UNLESS(::il2cpp_utils::New<MessageWithAchievementDefinitions>(c_message))) {}
 void ::Oculus::Platform::MessageWithAchievementDefinitions::_ctor(::cordl_internals::intptr_t c_message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithAchievementDefinitions>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, c_message);
}
 ::Oculus::Platform::Models::AchievementDefinitionList ::Oculus::Platform::MessageWithAchievementDefinitions::GetAchievementDefinitions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithAchievementDefinitions>::get(),
                            "GetAchievementDefinitions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AchievementDefinitionList, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::AchievementDefinitionList ::Oculus::Platform::MessageWithAchievementDefinitions::GetDataFromMessage(::cordl_internals::intptr_t c_message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithAchievementDefinitions>::get(),
                            "GetDataFromMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AchievementDefinitionList, false>(const_cast<void*>(instance), ___internal_method, c_message);
}
} // end anonymous namespace
