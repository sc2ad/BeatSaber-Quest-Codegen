#pragma once
#include "HoudiniEngineUnity/zzzz__Test_TreeInstance_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "UnityEngine/zzzz__TreeInstance_def.hpp"
//  Writing Method size for method: HoudiniEngineUnity::Test_TreeInstance._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::Test_TreeInstance::*)(UnityEngine::TreeInstance)>(&HoudiniEngineUnity::Test_TreeInstance::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2075940;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::Test_TreeInstance>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TreeInstance>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::Test_TreeInstance.IsEquivalentTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::Test_TreeInstance::*)(HoudiniEngineUnity::Test_TreeInstance)>(&HoudiniEngineUnity::Test_TreeInstance::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x2075974;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::Test_TreeInstance>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::Test_TreeInstance>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::Test_TreeInstance>
constexpr  HoudiniEngineUnity::Test_TreeInstance::operator HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::Test_TreeInstance>() const noexcept {
return HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::Test_TreeInstance>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::Test_TreeInstance::__set_self(UnityEngine::TreeInstance value)  {
::cordl_internals::setInstanceField<UnityEngine::TreeInstance, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::TreeInstance>(value));
}
constexpr UnityEngine::TreeInstance HoudiniEngineUnity::Test_TreeInstance::__get_self() const {
return ::cordl_internals::getInstanceField<UnityEngine::TreeInstance, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "self", ty: "UnityEngine::TreeInstance", modifiers: "", def_value: None }]
 HoudiniEngineUnity::Test_TreeInstance::Test_TreeInstance(UnityEngine::TreeInstance self)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Test_TreeInstance>(self))) {}
 void HoudiniEngineUnity::Test_TreeInstance::_ctor(UnityEngine::TreeInstance self)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::Test_TreeInstance>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TreeInstance>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, self);
}
 bool HoudiniEngineUnity::Test_TreeInstance::IsEquivalentTo(HoudiniEngineUnity::Test_TreeInstance other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::Test_TreeInstance>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::Test_TreeInstance>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, other);
}
