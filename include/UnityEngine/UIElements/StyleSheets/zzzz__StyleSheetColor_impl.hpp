#pragma once
#include "UnityEngine/UIElements/StyleSheets/zzzz__StyleSheetColor_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: UnityEngine::UIElements::StyleSheets::StyleSheetColor.TryGetColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<UnityEngine::Color>)>(&UnityEngine::UIElements::StyleSheets::StyleSheetColor::TryGetColor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2c6e9f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::StyleSheetColor>::get(),
                            "TryGetColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Color>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::StyleSheets::StyleSheetColor.HexToColor32
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color32 (*)(uint32_t)>(&UnityEngine::UIElements::StyleSheets::StyleSheetColor::HexToColor32)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2c718f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::StyleSheetColor>::get(),
                            "HexToColor32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::UIElements::StyleSheets::StyleSheetColor::__set_s_NameToColor(System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::Color32> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::Color32>, "s_NameToColor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::StyleSheetColor>::get>(std::forward<System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::Color32>>(value));
}
 System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::Color32> UnityEngine::UIElements::StyleSheets::StyleSheetColor::__get_s_NameToColor()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::Color32>, "s_NameToColor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::StyleSheetColor>::get>();
}
 bool UnityEngine::UIElements::StyleSheets::StyleSheetColor::TryGetColor(::StringW name, ByRef<UnityEngine::Color> color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::StyleSheetColor>::get(),
                            "TryGetColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Color>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, name, color);
}
 UnityEngine::Color32 UnityEngine::UIElements::StyleSheets::StyleSheetColor::HexToColor32(uint32_t color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::StyleSheetColor>::get(),
                            "HexToColor32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Color32, false>(nullptr, ___internal_method, color);
}
