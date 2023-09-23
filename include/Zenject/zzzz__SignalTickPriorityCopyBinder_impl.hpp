#pragma once
#include "Zenject/zzzz__SignalCopyBinder_impl.hpp"
#include "Zenject/zzzz__SignalTickPriorityCopyBinder_def.hpp"
#include "Zenject/zzzz__SignalCopyBinder_def.hpp"
#include "Zenject/zzzz__SignalDeclarationBindInfo_def.hpp"
//  Writing Method size for method: Zenject::SignalTickPriorityCopyBinder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SignalTickPriorityCopyBinder::*)(Zenject::SignalDeclarationBindInfo)>(&Zenject::SignalTickPriorityCopyBinder::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2d48df0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SignalTickPriorityCopyBinder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::SignalDeclarationBindInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::SignalTickPriorityCopyBinder.get_SignalBindInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::SignalDeclarationBindInfo (Zenject::SignalTickPriorityCopyBinder::*)()>(&Zenject::SignalTickPriorityCopyBinder::get_SignalBindInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d4934c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SignalTickPriorityCopyBinder>::get(),
                            "get_SignalBindInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::SignalTickPriorityCopyBinder.set_SignalBindInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SignalTickPriorityCopyBinder::*)(Zenject::SignalDeclarationBindInfo)>(&Zenject::SignalTickPriorityCopyBinder::set_SignalBindInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d49354;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SignalTickPriorityCopyBinder>::get(),
                            "set_SignalBindInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::SignalDeclarationBindInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::SignalTickPriorityCopyBinder.WithTickPriority
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::SignalCopyBinder (Zenject::SignalTickPriorityCopyBinder::*)(int32_t)>(&Zenject::SignalTickPriorityCopyBinder::WithTickPriority)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2d4935c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SignalTickPriorityCopyBinder>::get(),
                            "WithTickPriority",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::SignalTickPriorityCopyBinder::__set__SignalBindInfo_k__BackingField(Zenject::SignalDeclarationBindInfo value)  {
::cordl_internals::setInstanceField<Zenject::SignalDeclarationBindInfo, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::SignalDeclarationBindInfo>(value));
}
constexpr Zenject::SignalDeclarationBindInfo Zenject::SignalTickPriorityCopyBinder::__get__SignalBindInfo_k__BackingField() const {
return ::cordl_internals::getInstanceField<Zenject::SignalDeclarationBindInfo, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "signalBindInfo", ty: "Zenject::SignalDeclarationBindInfo", modifiers: "", def_value: None }]
 Zenject::SignalTickPriorityCopyBinder::SignalTickPriorityCopyBinder(Zenject::SignalDeclarationBindInfo signalBindInfo)  : Zenject::SignalCopyBinder(THROW_UNLESS(::il2cpp_utils::New<SignalTickPriorityCopyBinder>(signalBindInfo))) {}
 void Zenject::SignalTickPriorityCopyBinder::_ctor(Zenject::SignalDeclarationBindInfo signalBindInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SignalTickPriorityCopyBinder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::SignalDeclarationBindInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, signalBindInfo);
}
 Zenject::SignalDeclarationBindInfo Zenject::SignalTickPriorityCopyBinder::get_SignalBindInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SignalTickPriorityCopyBinder>::get(),
                            "get_SignalBindInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::SignalDeclarationBindInfo, false>(const_cast<void*>(instance), ___internal_method);
}
 void Zenject::SignalTickPriorityCopyBinder::set_SignalBindInfo(Zenject::SignalDeclarationBindInfo value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SignalTickPriorityCopyBinder>::get(),
                            "set_SignalBindInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::SignalDeclarationBindInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 Zenject::SignalCopyBinder Zenject::SignalTickPriorityCopyBinder::WithTickPriority(int32_t priority)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SignalTickPriorityCopyBinder>::get(),
                            "WithTickPriority",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::SignalCopyBinder, false>(const_cast<void*>(instance), ___internal_method, priority);
}
