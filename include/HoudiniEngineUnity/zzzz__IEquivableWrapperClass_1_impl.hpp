#pragma once
#include "HoudiniEngineUnity/zzzz__IEquivableWrapperClass_1_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
/// @brief Convert operator to HoudiniEngineUnity::IEquivable_1<T>
constexpr  HoudiniEngineUnity::IEquivableWrapperClass_1::operator HoudiniEngineUnity::IEquivable_1<T>() const noexcept {
return HoudiniEngineUnity::IEquivable_1<T>(::bs_hook::Il2CppWrapperType::instance);
}
 bool HoudiniEngineUnity::IEquivableWrapperClass_1::IsNull()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::IEquivableWrapperClass_1>::get(),
                            "IsNull",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
