#pragma once
#include "GlobalNamespace/zzzz__PlayerHeightToJumpOffsetYProvider_def.hpp"
#include "GlobalNamespace/zzzz__IJumpOffsetYProvider_def.hpp"
#include "Zenject/zzzz__IInitializable_def.hpp"
#include "GlobalNamespace/zzzz__PlayerHeightDetector_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: GlobalNamespace::PlayerHeightToJumpOffsetYProvider.get_jumpOffsetY
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::PlayerHeightToJumpOffsetYProvider::*)()>(&GlobalNamespace::PlayerHeightToJumpOffsetYProvider::get_jumpOffsetY)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2109868;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerHeightToJumpOffsetYProvider>::get(),
                            "get_jumpOffsetY",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlayerHeightToJumpOffsetYProvider.Initialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerHeightToJumpOffsetYProvider::*)()>(&GlobalNamespace::PlayerHeightToJumpOffsetYProvider::Initialize)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2109870;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerHeightToJumpOffsetYProvider>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlayerHeightToJumpOffsetYProvider.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerHeightToJumpOffsetYProvider::*)()>(&GlobalNamespace::PlayerHeightToJumpOffsetYProvider::Dispose)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x21099d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerHeightToJumpOffsetYProvider>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlayerHeightToJumpOffsetYProvider.HandlePlayerHeightDidChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerHeightToJumpOffsetYProvider::*)(float_t)>(&GlobalNamespace::PlayerHeightToJumpOffsetYProvider::HandlePlayerHeightDidChange)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x210999c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerHeightToJumpOffsetYProvider>::get(),
                            "HandlePlayerHeightDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlayerHeightToJumpOffsetYProvider.JumpOffsetYForPlayerHeight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(float_t)>(&GlobalNamespace::PlayerHeightToJumpOffsetYProvider::JumpOffsetYForPlayerHeight)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2109968;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerHeightToJumpOffsetYProvider>::get(),
                            "JumpOffsetYForPlayerHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlayerHeightToJumpOffsetYProvider._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerHeightToJumpOffsetYProvider::*)()>(&GlobalNamespace::PlayerHeightToJumpOffsetYProvider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2109aa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerHeightToJumpOffsetYProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::IJumpOffsetYProvider
constexpr  GlobalNamespace::PlayerHeightToJumpOffsetYProvider::operator GlobalNamespace::IJumpOffsetYProvider() const noexcept {
return GlobalNamespace::IJumpOffsetYProvider(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to Zenject::IInitializable
constexpr  GlobalNamespace::PlayerHeightToJumpOffsetYProvider::operator Zenject::IInitializable() const noexcept {
return Zenject::IInitializable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  GlobalNamespace::PlayerHeightToJumpOffsetYProvider::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PlayerHeightToJumpOffsetYProvider::__set__playerHeightDetector(GlobalNamespace::PlayerHeightDetector value)  {
::cordl_internals::setInstanceField<GlobalNamespace::PlayerHeightDetector, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::PlayerHeightDetector>(value));
}
constexpr GlobalNamespace::PlayerHeightDetector GlobalNamespace::PlayerHeightToJumpOffsetYProvider::__get__playerHeightDetector() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::PlayerHeightDetector, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PlayerHeightToJumpOffsetYProvider::__set__jumpOffsetY(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::PlayerHeightToJumpOffsetYProvider::__get__jumpOffsetY() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 float_t GlobalNamespace::PlayerHeightToJumpOffsetYProvider::get_jumpOffsetY()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerHeightToJumpOffsetYProvider>::get(),
                            "get_jumpOffsetY",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::PlayerHeightToJumpOffsetYProvider::Initialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerHeightToJumpOffsetYProvider>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::PlayerHeightToJumpOffsetYProvider::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerHeightToJumpOffsetYProvider>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::PlayerHeightToJumpOffsetYProvider::HandlePlayerHeightDidChange(float_t playerHeight)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerHeightToJumpOffsetYProvider>::get(),
                            "HandlePlayerHeightDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, playerHeight);
}
 float_t GlobalNamespace::PlayerHeightToJumpOffsetYProvider::JumpOffsetYForPlayerHeight(float_t playerHeight)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerHeightToJumpOffsetYProvider>::get(),
                            "JumpOffsetYForPlayerHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, playerHeight);
}
// Ctor Parameters []
 GlobalNamespace::PlayerHeightToJumpOffsetYProvider::PlayerHeightToJumpOffsetYProvider()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<PlayerHeightToJumpOffsetYProvider>())) {}
 void GlobalNamespace::PlayerHeightToJumpOffsetYProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerHeightToJumpOffsetYProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
