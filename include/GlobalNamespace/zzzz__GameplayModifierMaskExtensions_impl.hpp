#pragma once
#include "GlobalNamespace/zzzz__GameplayModifierMaskExtensions_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierMask_def.hpp"
//  Writing Method size for method: GlobalNamespace::GameplayModifierMaskExtensions.Contains
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(GlobalNamespace::GameplayModifierMask, GlobalNamespace::GameplayModifierMask)>(&GlobalNamespace::GameplayModifierMaskExtensions::Contains)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1214f8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifierMaskExtensions>::get(),
                            "Contains",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayModifierMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayModifierMask>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayModifierMaskExtensions.DifferenceFrom
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(GlobalNamespace::GameplayModifierMask, GlobalNamespace::GameplayModifierMask)>(&GlobalNamespace::GameplayModifierMaskExtensions::DifferenceFrom)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1214f9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifierMaskExtensions>::get(),
                            "DifferenceFrom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayModifierMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayModifierMask>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayModifierMaskExtensions.ToHexString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(GlobalNamespace::GameplayModifierMask)>(&GlobalNamespace::GameplayModifierMaskExtensions::ToHexString)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x1214fac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifierMaskExtensions>::get(),
                            "ToHexString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayModifierMask>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayModifierMaskExtensions.ToModifiers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GameplayModifiers (*)(GlobalNamespace::GameplayModifierMask)>(&GlobalNamespace::GameplayModifierMaskExtensions::ToModifiers)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x1215008;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifierMaskExtensions>::get(),
                            "ToModifiers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayModifierMask>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayModifierMaskExtensions.ToMask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GameplayModifierMask (*)(GlobalNamespace::GameplayModifiers)>(&GlobalNamespace::GameplayModifierMaskExtensions::ToMask)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x1215244;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifierMaskExtensions>::get(),
                            "ToMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayModifiers>::get()}
                        )));
    return ___internal_method;
  }
};
 bool GlobalNamespace::GameplayModifierMaskExtensions::Contains(GlobalNamespace::GameplayModifierMask mask, GlobalNamespace::GameplayModifierMask other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifierMaskExtensions>::get(),
                            "Contains",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayModifierMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayModifierMask>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, mask, other);
}
 int32_t GlobalNamespace::GameplayModifierMaskExtensions::DifferenceFrom(GlobalNamespace::GameplayModifierMask mask, GlobalNamespace::GameplayModifierMask other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifierMaskExtensions>::get(),
                            "DifferenceFrom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayModifierMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayModifierMask>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, mask, other);
}
 ::StringW GlobalNamespace::GameplayModifierMaskExtensions::ToHexString(GlobalNamespace::GameplayModifierMask mask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifierMaskExtensions>::get(),
                            "ToHexString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayModifierMask>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, mask);
}
 GlobalNamespace::GameplayModifiers GlobalNamespace::GameplayModifierMaskExtensions::ToModifiers(GlobalNamespace::GameplayModifierMask gameplayModifierMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifierMaskExtensions>::get(),
                            "ToModifiers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayModifierMask>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GameplayModifiers, false>(nullptr, ___internal_method, gameplayModifierMask);
}
 GlobalNamespace::GameplayModifierMask GlobalNamespace::GameplayModifierMaskExtensions::ToMask(GlobalNamespace::GameplayModifiers gameplayModifiers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifierMaskExtensions>::get(),
                            "ToMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayModifiers>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GameplayModifierMask, false>(nullptr, ___internal_method, gameplayModifiers);
}
