#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__PS5ActivityIdsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__ProgressActivitySO_def.hpp"
#include "GlobalNamespace/zzzz__CompetetiveActivitySO_def.hpp"
//  Writing Method size for method: GlobalNamespace::PS5ActivityIdsModelSO.get_progressActivities
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<GlobalNamespace::ProgressActivitySO> (GlobalNamespace::PS5ActivityIdsModelSO::*)()>(&GlobalNamespace::PS5ActivityIdsModelSO::get_progressActivities)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x221a7cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PS5ActivityIdsModelSO>::get(),
                            "get_progressActivities",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PS5ActivityIdsModelSO.get_competetiveActivities
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<GlobalNamespace::CompetetiveActivitySO> (GlobalNamespace::PS5ActivityIdsModelSO::*)()>(&GlobalNamespace::PS5ActivityIdsModelSO::get_competetiveActivities)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x221a7d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PS5ActivityIdsModelSO>::get(),
                            "get_competetiveActivities",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PS5ActivityIdsModelSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PS5ActivityIdsModelSO::*)()>(&GlobalNamespace::PS5ActivityIdsModelSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x221a7dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PS5ActivityIdsModelSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::PS5ActivityIdsModelSO::__set__progressActivities(::ArrayW<GlobalNamespace::ProgressActivitySO> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::ProgressActivitySO>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<GlobalNamespace::ProgressActivitySO>>(value));
}
constexpr ::ArrayW<GlobalNamespace::ProgressActivitySO> GlobalNamespace::PS5ActivityIdsModelSO::__get__progressActivities() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::ProgressActivitySO>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PS5ActivityIdsModelSO::__set__competetiveActivities(::ArrayW<GlobalNamespace::CompetetiveActivitySO> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::CompetetiveActivitySO>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<GlobalNamespace::CompetetiveActivitySO>>(value));
}
constexpr ::ArrayW<GlobalNamespace::CompetetiveActivitySO> GlobalNamespace::PS5ActivityIdsModelSO::__get__competetiveActivities() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::CompetetiveActivitySO>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::ArrayW<GlobalNamespace::ProgressActivitySO> GlobalNamespace::PS5ActivityIdsModelSO::get_progressActivities()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PS5ActivityIdsModelSO>::get(),
                            "get_progressActivities",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<GlobalNamespace::ProgressActivitySO>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<GlobalNamespace::CompetetiveActivitySO> GlobalNamespace::PS5ActivityIdsModelSO::get_competetiveActivities()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PS5ActivityIdsModelSO>::get(),
                            "get_competetiveActivities",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<GlobalNamespace::CompetetiveActivitySO>, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::PS5ActivityIdsModelSO GlobalNamespace::PS5ActivityIdsModelSO::New_ctor()  {
GlobalNamespace::PS5ActivityIdsModelSO o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::PS5ActivityIdsModelSO>())};
return o;
}
 void GlobalNamespace::PS5ActivityIdsModelSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PS5ActivityIdsModelSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
