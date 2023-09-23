#pragma once
#include "UnityEngine/UI/zzzz__ClipperRegistry_def.hpp"
#include "UnityEngine/UI/Collections/zzzz__IndexedSet_1_def.hpp"
#include "UnityEngine/UI/zzzz__IClipper_def.hpp"
//  Writing Method size for method: UnityEngine::UI::ClipperRegistry._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::ClipperRegistry::*)()>(&UnityEngine::UI::ClipperRegistry::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2bd9ff4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::ClipperRegistry>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::ClipperRegistry.get_instance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::ClipperRegistry (*)()>(&UnityEngine::UI::ClipperRegistry::get_instance)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2bd8e18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::ClipperRegistry>::get(),
                            "get_instance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::ClipperRegistry.Cull
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::ClipperRegistry::*)()>(&UnityEngine::UI::ClipperRegistry::Cull)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2bd8e94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::ClipperRegistry>::get(),
                            "Cull",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::ClipperRegistry.Register
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::UI::IClipper)>(&UnityEngine::UI::ClipperRegistry::Register)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2bda070;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::ClipperRegistry>::get(),
                            "Register",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::IClipper>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::ClipperRegistry.Unregister
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::UI::IClipper)>(&UnityEngine::UI::ClipperRegistry::Unregister)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2bda0e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::ClipperRegistry>::get(),
                            "Unregister",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::IClipper>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::ClipperRegistry.Disable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::UI::IClipper)>(&UnityEngine::UI::ClipperRegistry::Disable)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2bda13c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::ClipperRegistry>::get(),
                            "Disable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::IClipper>::get()}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::UI::ClipperRegistry::__set_s_Instance(UnityEngine::UI::ClipperRegistry value)  {
::cordl_internals::setStaticField<UnityEngine::UI::ClipperRegistry, "s_Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::ClipperRegistry>::get>(std::forward<UnityEngine::UI::ClipperRegistry>(value));
}
 UnityEngine::UI::ClipperRegistry UnityEngine::UI::ClipperRegistry::__get_s_Instance()  {
return ::cordl_internals::getStaticField<UnityEngine::UI::ClipperRegistry, "s_Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::ClipperRegistry>::get>();
}
constexpr void UnityEngine::UI::ClipperRegistry::__set_m_Clippers(UnityEngine::UI::Collections::IndexedSet_1<UnityEngine::UI::IClipper> value)  {
::cordl_internals::setInstanceField<UnityEngine::UI::Collections::IndexedSet_1<UnityEngine::UI::IClipper>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UI::Collections::IndexedSet_1<UnityEngine::UI::IClipper>>(value));
}
constexpr UnityEngine::UI::Collections::IndexedSet_1<UnityEngine::UI::IClipper> UnityEngine::UI::ClipperRegistry::__get_m_Clippers() const {
return ::cordl_internals::getInstanceField<UnityEngine::UI::Collections::IndexedSet_1<UnityEngine::UI::IClipper>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 UnityEngine::UI::ClipperRegistry::ClipperRegistry()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ClipperRegistry>())) {}
 void UnityEngine::UI::ClipperRegistry::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::ClipperRegistry>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::UI::ClipperRegistry UnityEngine::UI::ClipperRegistry::get_instance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::ClipperRegistry>::get(),
                            "get_instance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UI::ClipperRegistry, false>(nullptr, ___internal_method);
}
 void UnityEngine::UI::ClipperRegistry::Cull()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::ClipperRegistry>::get(),
                            "Cull",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::ClipperRegistry::Register(UnityEngine::UI::IClipper c)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::ClipperRegistry>::get(),
                            "Register",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::IClipper>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, c);
}
 void UnityEngine::UI::ClipperRegistry::Unregister(UnityEngine::UI::IClipper c)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::ClipperRegistry>::get(),
                            "Unregister",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::IClipper>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, c);
}
 void UnityEngine::UI::ClipperRegistry::Disable(UnityEngine::UI::IClipper c)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::ClipperRegistry>::get(),
                            "Disable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::IClipper>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, c);
}
