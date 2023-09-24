#pragma once
#include "UnityEngine/UIElements/StyleSheets/zzzz__StylePropertyUtil_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StyleEnumType_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StylePropertyId_def.hpp"
//  Writing Method size for method: UnityEngine::UIElements::StyleSheets::StylePropertyUtil.IsAnimatable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::UIElements::StyleSheets::StylePropertyId)>(&UnityEngine::UIElements::StyleSheets::StylePropertyUtil::IsAnimatable)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2c7555c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::StylePropertyUtil>::get(),
                            "IsAnimatable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::StyleSheets::StylePropertyId>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::StyleSheets::StylePropertyUtil.TryGetEnumIntValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::UIElements::StyleSheets::StyleEnumType, ::StringW, ByRef<int32_t>)>(&UnityEngine::UIElements::StyleSheets::StylePropertyUtil::TryGetEnumIntValue)> {
  constexpr static std::size_t size = 0xd98;
  constexpr static std::size_t addrs = 0x2c755dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::StylePropertyUtil>::get(),
                            "TryGetEnumIntValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::StyleSheets::StyleEnumType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::StyleSheets::StylePropertyUtil.IsMatchingShorthand
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::UIElements::StyleSheets::StylePropertyId, UnityEngine::UIElements::StyleSheets::StylePropertyId)>(&UnityEngine::UIElements::StyleSheets::StylePropertyUtil::IsMatchingShorthand)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2c76374;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::StylePropertyUtil>::get(),
                            "IsMatchingShorthand",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::StyleSheets::StylePropertyId>::get()}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::UIElements::StyleSheets::StylePropertyUtil::__set_s_AnimatablePropertiesHash(System::Collections::Generic::HashSet_1<UnityEngine::UIElements::StyleSheets::StylePropertyId> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::HashSet_1<UnityEngine::UIElements::StyleSheets::StylePropertyId>, "s_AnimatablePropertiesHash", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::StylePropertyUtil>::get>(std::forward<System::Collections::Generic::HashSet_1<UnityEngine::UIElements::StyleSheets::StylePropertyId>>(value));
}
 System::Collections::Generic::HashSet_1<UnityEngine::UIElements::StyleSheets::StylePropertyId> UnityEngine::UIElements::StyleSheets::StylePropertyUtil::__get_s_AnimatablePropertiesHash()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::HashSet_1<UnityEngine::UIElements::StyleSheets::StylePropertyId>, "s_AnimatablePropertiesHash", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::StylePropertyUtil>::get>();
}
 void UnityEngine::UIElements::StyleSheets::StylePropertyUtil::__set_s_NameToId(System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::UIElements::StyleSheets::StylePropertyId> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::UIElements::StyleSheets::StylePropertyId>, "s_NameToId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::StylePropertyUtil>::get>(std::forward<System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::UIElements::StyleSheets::StylePropertyId>>(value));
}
 System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::UIElements::StyleSheets::StylePropertyId> UnityEngine::UIElements::StyleSheets::StylePropertyUtil::__get_s_NameToId()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::UIElements::StyleSheets::StylePropertyId>, "s_NameToId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::StylePropertyUtil>::get>();
}
 void UnityEngine::UIElements::StyleSheets::StylePropertyUtil::__set_s_IdToName(System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::StyleSheets::StylePropertyId,::StringW> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::StyleSheets::StylePropertyId,::StringW>, "s_IdToName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::StylePropertyUtil>::get>(std::forward<System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::StyleSheets::StylePropertyId,::StringW>>(value));
}
 System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::StyleSheets::StylePropertyId,::StringW> UnityEngine::UIElements::StyleSheets::StylePropertyUtil::__get_s_IdToName()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::StyleSheets::StylePropertyId,::StringW>, "s_IdToName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::StylePropertyUtil>::get>();
}
 void UnityEngine::UIElements::StyleSheets::StylePropertyUtil::__set_s_AnimatableProperties(::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> value)  {
::cordl_internals::setStaticField<::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId>, "s_AnimatableProperties", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::StylePropertyUtil>::get>(std::forward<::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId>>(value));
}
 ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> UnityEngine::UIElements::StyleSheets::StylePropertyUtil::__get_s_AnimatableProperties()  {
return ::cordl_internals::getStaticField<::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId>, "s_AnimatableProperties", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::StylePropertyUtil>::get>();
}
 bool UnityEngine::UIElements::StyleSheets::StylePropertyUtil::IsAnimatable(UnityEngine::UIElements::StyleSheets::StylePropertyId id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::StylePropertyUtil>::get(),
                            "IsAnimatable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::StyleSheets::StylePropertyId>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, id);
}
 bool UnityEngine::UIElements::StyleSheets::StylePropertyUtil::TryGetEnumIntValue(UnityEngine::UIElements::StyleSheets::StyleEnumType enumType, ::StringW value, ByRef<int32_t> intValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::StylePropertyUtil>::get(),
                            "TryGetEnumIntValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::StyleSheets::StyleEnumType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, enumType, value, intValue);
}
 bool UnityEngine::UIElements::StyleSheets::StylePropertyUtil::IsMatchingShorthand(UnityEngine::UIElements::StyleSheets::StylePropertyId shorthand, UnityEngine::UIElements::StyleSheets::StylePropertyId id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::StylePropertyUtil>::get(),
                            "IsMatchingShorthand",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::StyleSheets::StylePropertyId>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, shorthand, id);
}
