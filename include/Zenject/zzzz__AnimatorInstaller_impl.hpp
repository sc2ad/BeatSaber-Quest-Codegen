#pragma once
#include "Zenject/zzzz__Installer_2_impl.hpp"
#include "Zenject/zzzz__AnimatorInstaller_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
//  Writing Method size for method: Zenject::AnimatorInstaller._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::AnimatorInstaller::*)(UnityEngine::Animator)>(&Zenject::AnimatorInstaller::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2d9510c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::AnimatorInstaller>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Animator>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::AnimatorInstaller.InstallBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::AnimatorInstaller::*)()>(&Zenject::AnimatorInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2d95168;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Zenject::AnimatorInstaller),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::AnimatorInstaller>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::AnimatorInstaller.__zenCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(::ArrayW<::bs_hook::Il2CppWrapperType>)>(&Zenject::AnimatorInstaller::__zenCreate)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2d95220;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::AnimatorInstaller>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::AnimatorInstaller.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectTypeInfo (*)()>(&Zenject::AnimatorInstaller::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x2d952e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::AnimatorInstaller>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::AnimatorInstaller::__set__animator(UnityEngine::Animator value)  {
::cordl_internals::setInstanceField<UnityEngine::Animator, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Animator>(value));
}
constexpr UnityEngine::Animator Zenject::AnimatorInstaller::__get__animator() const {
return ::cordl_internals::getInstanceField<UnityEngine::Animator, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "animator", ty: "UnityEngine::Animator", modifiers: "", def_value: None }]
 Zenject::AnimatorInstaller::AnimatorInstaller(UnityEngine::Animator animator)  : Zenject::Installer_2<UnityEngine::Animator,Zenject::AnimatorInstaller>(THROW_UNLESS(::il2cpp_utils::New<AnimatorInstaller>(animator))) {}
 void Zenject::AnimatorInstaller::_ctor(UnityEngine::Animator animator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::AnimatorInstaller>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Animator>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, animator);
}
 void Zenject::AnimatorInstaller::InstallBindings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::AnimatorInstaller>::get(),
                            "InstallBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType Zenject::AnimatorInstaller::__zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::AnimatorInstaller>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, P_0);
}
 Zenject::InjectTypeInfo Zenject::AnimatorInstaller::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::AnimatorInstaller>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
