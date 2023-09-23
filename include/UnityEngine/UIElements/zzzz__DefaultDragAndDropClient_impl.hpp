#pragma once
#include "UnityEngine/UIElements/zzzz__DefaultDragAndDropClient_def.hpp"
#include "UnityEngine/UIElements/zzzz__IDragAndDrop_def.hpp"
#include "UnityEngine/UIElements/zzzz__IDragAndDropData_def.hpp"
#include "UnityEngine/UIElements/zzzz__StartDragArgs_def.hpp"
//  Writing Method size for method: UnityEngine::UIElements::DefaultDragAndDropClient.get_userData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (UnityEngine::UIElements::DefaultDragAndDropClient::*)()>(&UnityEngine::UIElements::DefaultDragAndDropClient::get_userData)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2c949f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::DefaultDragAndDropClient>::get(),
                            "get_userData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::DefaultDragAndDropClient.StartDrag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::DefaultDragAndDropClient::*)(UnityEngine::UIElements::StartDragArgs)>(&UnityEngine::UIElements::DefaultDragAndDropClient::StartDrag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c94a0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::DefaultDragAndDropClient>::get(),
                            "StartDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::StartDragArgs>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::DefaultDragAndDropClient.get_data
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::IDragAndDropData (UnityEngine::UIElements::DefaultDragAndDropClient::*)()>(&UnityEngine::UIElements::DefaultDragAndDropClient::get_data)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2c92d44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::DefaultDragAndDropClient>::get(),
                            "get_data",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::DefaultDragAndDropClient._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::DefaultDragAndDropClient::*)()>(&UnityEngine::UIElements::DefaultDragAndDropClient::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c949ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::DefaultDragAndDropClient>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to UnityEngine::UIElements::IDragAndDrop
constexpr  UnityEngine::UIElements::DefaultDragAndDropClient::operator UnityEngine::UIElements::IDragAndDrop() const noexcept {
return UnityEngine::UIElements::IDragAndDrop(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to UnityEngine::UIElements::IDragAndDropData
constexpr  UnityEngine::UIElements::DefaultDragAndDropClient::operator UnityEngine::UIElements::IDragAndDropData() const noexcept {
return UnityEngine::UIElements::IDragAndDropData(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::DefaultDragAndDropClient::__set_m_StartDragArgs(UnityEngine::UIElements::StartDragArgs value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::StartDragArgs, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::StartDragArgs>(value));
}
constexpr UnityEngine::UIElements::StartDragArgs UnityEngine::UIElements::DefaultDragAndDropClient::__get_m_StartDragArgs() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::StartDragArgs, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::bs_hook::Il2CppWrapperType UnityEngine::UIElements::DefaultDragAndDropClient::get_userData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::DefaultDragAndDropClient>::get(),
                            "get_userData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::DefaultDragAndDropClient::StartDrag(UnityEngine::UIElements::StartDragArgs args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::DefaultDragAndDropClient>::get(),
                            "StartDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::StartDragArgs>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, args);
}
 UnityEngine::UIElements::IDragAndDropData UnityEngine::UIElements::DefaultDragAndDropClient::get_data()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::DefaultDragAndDropClient>::get(),
                            "get_data",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::IDragAndDropData, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 UnityEngine::UIElements::DefaultDragAndDropClient::DefaultDragAndDropClient()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<DefaultDragAndDropClient>())) {}
 void UnityEngine::UIElements::DefaultDragAndDropClient::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::DefaultDragAndDropClient>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
