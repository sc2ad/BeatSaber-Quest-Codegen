#pragma once
#include "GlobalNamespace/zzzz__StaticJumpOffsetYProvider_def.hpp"
#include "GlobalNamespace/zzzz__IJumpOffsetYProvider_def.hpp"
#include "GlobalNamespace/zzzz__StaticJumpOffsetYProvider_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__StaticJumpOffsetYProvider__InitData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__StaticJumpOffsetYProvider__InitData::*)(float_t)>(&GlobalNamespace::GlobalNamespace__StaticJumpOffsetYProvider__InitData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x224cf50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__StaticJumpOffsetYProvider__InitData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__StaticJumpOffsetYProvider__InitData::__set_jumpyYOffset(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::GlobalNamespace__StaticJumpOffsetYProvider__InitData::__get_jumpyYOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__StaticJumpOffsetYProvider__InitData GlobalNamespace::GlobalNamespace__StaticJumpOffsetYProvider__InitData::New_ctor(float_t jumpyYOffset)  {
GlobalNamespace::GlobalNamespace__StaticJumpOffsetYProvider__InitData o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__StaticJumpOffsetYProvider__InitData>(jumpyYOffset))};
return o;
}
 void GlobalNamespace::GlobalNamespace__StaticJumpOffsetYProvider__InitData::_ctor(float_t jumpyYOffset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__StaticJumpOffsetYProvider__InitData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, jumpyYOffset);
}
//  Writing Method size for method: GlobalNamespace::StaticJumpOffsetYProvider.get_jumpOffsetY
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::StaticJumpOffsetYProvider::*)()>(&GlobalNamespace::StaticJumpOffsetYProvider::get_jumpOffsetY)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x224cf2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StaticJumpOffsetYProvider>::get(),
                            "get_jumpOffsetY",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::StaticJumpOffsetYProvider._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StaticJumpOffsetYProvider::*)()>(&GlobalNamespace::StaticJumpOffsetYProvider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x224cf48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StaticJumpOffsetYProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::IJumpOffsetYProvider
constexpr  GlobalNamespace::StaticJumpOffsetYProvider::operator GlobalNamespace::IJumpOffsetYProvider() const noexcept {
return GlobalNamespace::IJumpOffsetYProvider(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::StaticJumpOffsetYProvider::__set__initData(GlobalNamespace::GlobalNamespace__StaticJumpOffsetYProvider__InitData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__StaticJumpOffsetYProvider__InitData, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__StaticJumpOffsetYProvider__InitData>(value));
}
constexpr GlobalNamespace::GlobalNamespace__StaticJumpOffsetYProvider__InitData GlobalNamespace::StaticJumpOffsetYProvider::__get__initData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__StaticJumpOffsetYProvider__InitData, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 float_t GlobalNamespace::StaticJumpOffsetYProvider::get_jumpOffsetY()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StaticJumpOffsetYProvider>::get(),
                            "get_jumpOffsetY",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::StaticJumpOffsetYProvider GlobalNamespace::StaticJumpOffsetYProvider::New_ctor()  {
GlobalNamespace::StaticJumpOffsetYProvider o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::StaticJumpOffsetYProvider>())};
return o;
}
 void GlobalNamespace::StaticJumpOffsetYProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StaticJumpOffsetYProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
