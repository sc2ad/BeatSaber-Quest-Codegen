#pragma once
namespace {
#include "UnityEngine/UIElements/zzzz__PointerType_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::PointerType.GetPointerType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(int32_t)>(&::UnityEngine::UIElements::PointerType::GetPointerType)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2cd7840;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerType>::get(),
                            "GetPointerType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerType.IsDirectManipulationDevice
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::UnityEngine::UIElements::PointerType::IsDirectManipulationDevice)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2cd78dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerType>::get(),
                            "IsDirectManipulationDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::UnityEngine::UIElements::PointerType::__set_mouse(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "mouse", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerType>::get>(std::forward<::StringW>(value));
}
 ::StringW ::UnityEngine::UIElements::PointerType::__get_mouse()  {
return ::cordl_internals::getStaticField<::StringW, "mouse", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerType>::get>();
}
 void ::UnityEngine::UIElements::PointerType::__set_touch(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "touch", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerType>::get>(std::forward<::StringW>(value));
}
 ::StringW ::UnityEngine::UIElements::PointerType::__get_touch()  {
return ::cordl_internals::getStaticField<::StringW, "touch", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerType>::get>();
}
 void ::UnityEngine::UIElements::PointerType::__set_pen(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "pen", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerType>::get>(std::forward<::StringW>(value));
}
 ::StringW ::UnityEngine::UIElements::PointerType::__get_pen()  {
return ::cordl_internals::getStaticField<::StringW, "pen", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerType>::get>();
}
 void ::UnityEngine::UIElements::PointerType::__set_unknown(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "unknown", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerType>::get>(std::forward<::StringW>(value));
}
 ::StringW ::UnityEngine::UIElements::PointerType::__get_unknown()  {
return ::cordl_internals::getStaticField<::StringW, "unknown", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerType>::get>();
}
 ::StringW ::UnityEngine::UIElements::PointerType::GetPointerType(int32_t pointerId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerType>::get(),
                            "GetPointerType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, pointerId);
}
 bool ::UnityEngine::UIElements::PointerType::IsDirectManipulationDevice(::StringW pointerType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerType>::get(),
                            "IsDirectManipulationDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, pointerType);
}
} // end anonymous namespace
