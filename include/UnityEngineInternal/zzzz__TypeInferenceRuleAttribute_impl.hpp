#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngineInternal/zzzz__TypeInferenceRuleAttribute_def.hpp"
#include "UnityEngineInternal/zzzz__TypeInferenceRules_def.hpp"
//  Writing Method size for method: UnityEngineInternal::TypeInferenceRuleAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngineInternal::TypeInferenceRuleAttribute::*)(UnityEngineInternal::TypeInferenceRules)>(&UnityEngineInternal::TypeInferenceRuleAttribute::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2b279cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngineInternal::TypeInferenceRuleAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngineInternal::TypeInferenceRules>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngineInternal::TypeInferenceRuleAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngineInternal::TypeInferenceRuleAttribute::*)(::StringW)>(&UnityEngineInternal::TypeInferenceRuleAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2b27a50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngineInternal::TypeInferenceRuleAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngineInternal::TypeInferenceRuleAttribute.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngineInternal::TypeInferenceRuleAttribute::*)()>(&UnityEngineInternal::TypeInferenceRuleAttribute::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b27a78;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngineInternal::TypeInferenceRuleAttribute),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngineInternal::TypeInferenceRuleAttribute>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
constexpr void UnityEngineInternal::TypeInferenceRuleAttribute::__set__rule(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngineInternal::TypeInferenceRuleAttribute::__get__rule() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "rule", ty: "UnityEngineInternal::TypeInferenceRules", modifiers: "", def_value: None }]
 UnityEngineInternal::TypeInferenceRuleAttribute::TypeInferenceRuleAttribute(UnityEngineInternal::TypeInferenceRules rule)  : System::Attribute(THROW_UNLESS(::il2cpp_utils::New<TypeInferenceRuleAttribute>(rule))) {}
 void UnityEngineInternal::TypeInferenceRuleAttribute::_ctor(UnityEngineInternal::TypeInferenceRules rule)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngineInternal::TypeInferenceRuleAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngineInternal::TypeInferenceRules>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, rule);
}
// Ctor Parameters [CppParam { name: "rule", ty: "::StringW", modifiers: "", def_value: None }]
 UnityEngineInternal::TypeInferenceRuleAttribute::TypeInferenceRuleAttribute(::StringW rule)  : System::Attribute(THROW_UNLESS(::il2cpp_utils::New<TypeInferenceRuleAttribute>(rule))) {}
 void UnityEngineInternal::TypeInferenceRuleAttribute::_ctor(::StringW rule)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngineInternal::TypeInferenceRuleAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, rule);
}
 ::StringW UnityEngineInternal::TypeInferenceRuleAttribute::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngineInternal::TypeInferenceRuleAttribute>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
