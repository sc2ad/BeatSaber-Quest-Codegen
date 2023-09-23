#pragma once
#include "GlobalNamespace/zzzz__MaterialPropertyBlockAnimator_impl.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockVectorAnimator_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: GlobalNamespace::MaterialPropertyBlockVectorAnimator.SetProperty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MaterialPropertyBlockVectorAnimator::*)()>(&GlobalNamespace::MaterialPropertyBlockVectorAnimator::SetProperty)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x1fa29fc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::MaterialPropertyBlockVectorAnimator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MaterialPropertyBlockVectorAnimator>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MaterialPropertyBlockVectorAnimator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MaterialPropertyBlockVectorAnimator::*)()>(&GlobalNamespace::MaterialPropertyBlockVectorAnimator::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1fa2a30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MaterialPropertyBlockVectorAnimator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MaterialPropertyBlockVectorAnimator::__set__vector(UnityEngine::Vector4 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector4, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector4>(value));
}
constexpr UnityEngine::Vector4 GlobalNamespace::MaterialPropertyBlockVectorAnimator::__get__vector() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector4, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::MaterialPropertyBlockVectorAnimator::SetProperty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MaterialPropertyBlockVectorAnimator>::get(),
                            "SetProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::MaterialPropertyBlockVectorAnimator::MaterialPropertyBlockVectorAnimator()  : GlobalNamespace::MaterialPropertyBlockAnimator(THROW_UNLESS(::il2cpp_utils::New<MaterialPropertyBlockVectorAnimator>())) {}
 void GlobalNamespace::MaterialPropertyBlockVectorAnimator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MaterialPropertyBlockVectorAnimator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
