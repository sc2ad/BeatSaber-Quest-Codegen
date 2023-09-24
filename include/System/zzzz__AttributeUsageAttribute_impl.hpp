#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/zzzz__AttributeUsageAttribute_def.hpp"
#include "System/zzzz__AttributeTargets_def.hpp"
//  Writing Method size for method: System::AttributeUsageAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::AttributeUsageAttribute::*)(System::AttributeTargets)>(&System::AttributeUsageAttribute::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x23b4958;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AttributeUsageAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AttributeTargets>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::AttributeUsageAttribute.get_AllowMultiple
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::AttributeUsageAttribute::*)()>(&System::AttributeUsageAttribute::get_AllowMultiple)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23b4990;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AttributeUsageAttribute>::get(),
                            "get_AllowMultiple",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::AttributeUsageAttribute.set_AllowMultiple
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::AttributeUsageAttribute::*)(bool)>(&System::AttributeUsageAttribute::set_AllowMultiple)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23b4998;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AttributeUsageAttribute>::get(),
                            "set_AllowMultiple",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::AttributeUsageAttribute.get_Inherited
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::AttributeUsageAttribute::*)()>(&System::AttributeUsageAttribute::get_Inherited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23b49a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AttributeUsageAttribute>::get(),
                            "get_Inherited",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::AttributeUsageAttribute.set_Inherited
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::AttributeUsageAttribute::*)(bool)>(&System::AttributeUsageAttribute::set_Inherited)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23b49ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AttributeUsageAttribute>::get(),
                            "set_Inherited",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::AttributeUsageAttribute::__set__attributeTarget(System::AttributeTargets value)  {
::cordl_internals::setInstanceField<System::AttributeTargets, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::AttributeTargets>(value));
}
constexpr System::AttributeTargets System::AttributeUsageAttribute::__get__attributeTarget() const {
return ::cordl_internals::getInstanceField<System::AttributeTargets, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::AttributeUsageAttribute::__set__allowMultiple(bool value)  {
::cordl_internals::setInstanceField<bool, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::AttributeUsageAttribute::__get__allowMultiple() const {
return ::cordl_internals::getInstanceField<bool, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::AttributeUsageAttribute::__set__inherited(bool value)  {
::cordl_internals::setInstanceField<bool, 0x15>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::AttributeUsageAttribute::__get__inherited() const {
return ::cordl_internals::getInstanceField<bool, 0x15>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void System::AttributeUsageAttribute::__set_Default(System::AttributeUsageAttribute value)  {
::cordl_internals::setStaticField<System::AttributeUsageAttribute, "Default", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AttributeUsageAttribute>::get>(std::forward<System::AttributeUsageAttribute>(value));
}
 System::AttributeUsageAttribute System::AttributeUsageAttribute::__get_Default()  {
return ::cordl_internals::getStaticField<System::AttributeUsageAttribute, "Default", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AttributeUsageAttribute>::get>();
}
 System::AttributeUsageAttribute System::AttributeUsageAttribute::New_ctor(System::AttributeTargets validOn)  {
System::AttributeUsageAttribute o{THROW_UNLESS(::il2cpp_utils::New<System::AttributeUsageAttribute>(validOn))};
return o;
}
 void System::AttributeUsageAttribute::_ctor(System::AttributeTargets validOn)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AttributeUsageAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AttributeTargets>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, validOn);
}
 bool System::AttributeUsageAttribute::get_AllowMultiple()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AttributeUsageAttribute>::get(),
                            "get_AllowMultiple",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::AttributeUsageAttribute::set_AllowMultiple(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AttributeUsageAttribute>::get(),
                            "set_AllowMultiple",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool System::AttributeUsageAttribute::get_Inherited()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AttributeUsageAttribute>::get(),
                            "get_Inherited",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::AttributeUsageAttribute::set_Inherited(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AttributeUsageAttribute>::get(),
                            "set_Inherited",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
