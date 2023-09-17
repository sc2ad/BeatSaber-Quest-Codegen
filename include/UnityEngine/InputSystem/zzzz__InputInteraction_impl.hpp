#pragma once
namespace {
#include "UnityEngine/InputSystem/zzzz__InputInteraction_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__TypeTable_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::InputInteraction.GetValueType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type (*)(::System::Type)>(&::UnityEngine::InputSystem::InputInteraction::GetValueType)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x28a3b58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteraction>::get(),
                            "GetValueType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputInteraction.GetDisplayName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::UnityEngine::InputSystem::InputInteraction::GetDisplayName)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x28a3c4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteraction>::get(),
                            "GetDisplayName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputInteraction.GetDisplayName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Type)>(&::UnityEngine::InputSystem::InputInteraction::GetDisplayName)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x28a3d50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteraction>::get(),
                            "GetDisplayName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::UnityEngine::InputSystem::InputInteraction::__set_s_Interactions(::UnityEngine::InputSystem::Utilities::TypeTable value)  {
::cordl_internals::setStaticField<::UnityEngine::InputSystem::Utilities::TypeTable, "s_Interactions", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteraction>::get>(std::forward<::UnityEngine::InputSystem::Utilities::TypeTable>(value));
}
 ::UnityEngine::InputSystem::Utilities::TypeTable ::UnityEngine::InputSystem::InputInteraction::__get_s_Interactions()  {
return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Utilities::TypeTable, "s_Interactions", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteraction>::get>();
}
 ::System::Type ::UnityEngine::InputSystem::InputInteraction::GetValueType(::System::Type interactionType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteraction>::get(),
                            "GetValueType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type, false>(nullptr, ___internal_method, interactionType);
}
 ::StringW ::UnityEngine::InputSystem::InputInteraction::GetDisplayName(::StringW interaction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteraction>::get(),
                            "GetDisplayName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, interaction);
}
 ::StringW ::UnityEngine::InputSystem::InputInteraction::GetDisplayName(::System::Type interactionType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteraction>::get(),
                            "GetDisplayName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, interactionType);
}
} // end anonymous namespace
