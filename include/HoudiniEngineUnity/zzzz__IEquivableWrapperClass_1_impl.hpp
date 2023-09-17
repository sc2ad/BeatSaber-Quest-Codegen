#pragma once
namespace {
#include "HoudiniEngineUnity/zzzz__IEquivableWrapperClass_1_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::IEquivableWrapperClass_1.IsNull
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::IEquivableWrapperClass_1::*)()>(&::HoudiniEngineUnity::IEquivableWrapperClass_1::IsNull)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::HoudiniEngineUnity::IEquivableWrapperClass_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::IEquivableWrapperClass_1>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::HoudiniEngineUnity::IEquivable_1<T>
constexpr  ::HoudiniEngineUnity::IEquivableWrapperClass_1::operator ::HoudiniEngineUnity::IEquivable_1<T>() const noexcept {
return ::HoudiniEngineUnity::IEquivable_1<T>(::bs_hook::Il2CppWrapperType::instance);
}
 bool ::HoudiniEngineUnity::IEquivableWrapperClass_1::IsNull()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::IEquivableWrapperClass_1>::get(),
                            "IsNull",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
