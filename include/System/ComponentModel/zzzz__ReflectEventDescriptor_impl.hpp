#pragma once
#include "System/ComponentModel/zzzz__EventDescriptor_impl.hpp"
#include "System/ComponentModel/zzzz__ReflectEventDescriptor_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Reflection/zzzz__EventInfo_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
//  Writing Method size for method: System::ComponentModel::ReflectEventDescriptor._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::ReflectEventDescriptor::*)(System::Type, System::Reflection::EventInfo)>(&System::ComponentModel::ReflectEventDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x27842c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::ReflectEventDescriptor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::EventInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::ReflectEventDescriptor.FillAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::ReflectEventDescriptor::*)(System::Collections::IList)>(&System::ComponentModel::ReflectEventDescriptor::FillAttributes)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x278443c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::ComponentModel::ReflectEventDescriptor),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::ReflectEventDescriptor>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::ReflectEventDescriptor.FillEventInfoAttribute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::ReflectEventDescriptor::*)(System::Reflection::EventInfo, System::Collections::IList)>(&System::ComponentModel::ReflectEventDescriptor::FillEventInfoAttribute)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x27848e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::ReflectEventDescriptor>::get(),
                            "FillEventInfoAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::EventInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IList>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::ReflectEventDescriptor.FillMethods
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::ReflectEventDescriptor::*)()>(&System::ComponentModel::ReflectEventDescriptor::FillMethods)> {
  constexpr static std::size_t size = 0x448;
  constexpr static std::size_t addrs = 0x27844a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::ReflectEventDescriptor>::get(),
                            "FillMethods",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::ReflectEventDescriptor.FillSingleMethodAttribute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::ReflectEventDescriptor::*)(System::Reflection::MethodInfo, System::Collections::IList)>(&System::ComponentModel::ReflectEventDescriptor::FillSingleMethodAttribute)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x2784c10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::ReflectEventDescriptor>::get(),
                            "FillSingleMethodAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MethodInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IList>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::ComponentModel::ReflectEventDescriptor::__set__type(System::Type value)  {
::cordl_internals::setInstanceField<System::Type, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Type>(value));
}
constexpr System::Type System::ComponentModel::ReflectEventDescriptor::__get__type() const {
return ::cordl_internals::getInstanceField<System::Type, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::ComponentModel::ReflectEventDescriptor::__set__componentClass(System::Type value)  {
::cordl_internals::setInstanceField<System::Type, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Type>(value));
}
constexpr System::Type System::ComponentModel::ReflectEventDescriptor::__get__componentClass() const {
return ::cordl_internals::getInstanceField<System::Type, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::ComponentModel::ReflectEventDescriptor::__set__addMethod(System::Reflection::MethodInfo value)  {
::cordl_internals::setInstanceField<System::Reflection::MethodInfo, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Reflection::MethodInfo>(value));
}
constexpr System::Reflection::MethodInfo System::ComponentModel::ReflectEventDescriptor::__get__addMethod() const {
return ::cordl_internals::getInstanceField<System::Reflection::MethodInfo, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::ComponentModel::ReflectEventDescriptor::__set__removeMethod(System::Reflection::MethodInfo value)  {
::cordl_internals::setInstanceField<System::Reflection::MethodInfo, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Reflection::MethodInfo>(value));
}
constexpr System::Reflection::MethodInfo System::ComponentModel::ReflectEventDescriptor::__get__removeMethod() const {
return ::cordl_internals::getInstanceField<System::Reflection::MethodInfo, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::ComponentModel::ReflectEventDescriptor::__set__realEvent(System::Reflection::EventInfo value)  {
::cordl_internals::setInstanceField<System::Reflection::EventInfo, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Reflection::EventInfo>(value));
}
constexpr System::Reflection::EventInfo System::ComponentModel::ReflectEventDescriptor::__get__realEvent() const {
return ::cordl_internals::getInstanceField<System::Reflection::EventInfo, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::ComponentModel::ReflectEventDescriptor::__set__filledMethods(bool value)  {
::cordl_internals::setInstanceField<bool, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::ComponentModel::ReflectEventDescriptor::__get__filledMethods() const {
return ::cordl_internals::getInstanceField<bool, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "componentClass", ty: "System::Type", modifiers: "", def_value: None }, CppParam { name: "eventInfo", ty: "System::Reflection::EventInfo", modifiers: "", def_value: None }]
 System::ComponentModel::ReflectEventDescriptor::ReflectEventDescriptor(System::Type componentClass, System::Reflection::EventInfo eventInfo)  : System::ComponentModel::EventDescriptor(THROW_UNLESS(::il2cpp_utils::New<ReflectEventDescriptor>(componentClass, eventInfo))) {}
 void System::ComponentModel::ReflectEventDescriptor::_ctor(System::Type componentClass, System::Reflection::EventInfo eventInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::ReflectEventDescriptor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::EventInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, componentClass, eventInfo);
}
 void System::ComponentModel::ReflectEventDescriptor::FillAttributes(System::Collections::IList attributes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::ReflectEventDescriptor>::get(),
                            "FillAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IList>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, attributes);
}
 void System::ComponentModel::ReflectEventDescriptor::FillEventInfoAttribute(System::Reflection::EventInfo realEventInfo, System::Collections::IList attributes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::ReflectEventDescriptor>::get(),
                            "FillEventInfoAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::EventInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IList>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, realEventInfo, attributes);
}
 void System::ComponentModel::ReflectEventDescriptor::FillMethods()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::ReflectEventDescriptor>::get(),
                            "FillMethods",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::ComponentModel::ReflectEventDescriptor::FillSingleMethodAttribute(System::Reflection::MethodInfo realMethodInfo, System::Collections::IList attributes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::ReflectEventDescriptor>::get(),
                            "FillSingleMethodAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MethodInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IList>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, realMethodInfo, attributes);
}
