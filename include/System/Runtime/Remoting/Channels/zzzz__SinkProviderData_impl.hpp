#pragma once
#include "System/Runtime/Remoting/Channels/zzzz__SinkProviderData_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
//  Writing Method size for method: System::Runtime::Remoting::Channels::SinkProviderData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Channels::SinkProviderData::*)(::StringW)>(&System::Runtime::Remoting::Channels::SinkProviderData::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2337f98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Channels::SinkProviderData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Channels::SinkProviderData.get_Children
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IList (System::Runtime::Remoting::Channels::SinkProviderData::*)()>(&System::Runtime::Remoting::Channels::SinkProviderData::get_Children)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2338044;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Channels::SinkProviderData>::get(),
                            "get_Children",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Channels::SinkProviderData.get_Properties
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IDictionary (System::Runtime::Remoting::Channels::SinkProviderData::*)()>(&System::Runtime::Remoting::Channels::SinkProviderData::get_Properties)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x233804c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Channels::SinkProviderData>::get(),
                            "get_Properties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Runtime::Remoting::Channels::SinkProviderData::__set_sinkName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Runtime::Remoting::Channels::SinkProviderData::__get_sinkName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Remoting::Channels::SinkProviderData::__set_children(System::Collections::ArrayList value)  {
::cordl_internals::setInstanceField<System::Collections::ArrayList, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::ArrayList>(value));
}
constexpr System::Collections::ArrayList System::Runtime::Remoting::Channels::SinkProviderData::__get_children() const {
return ::cordl_internals::getInstanceField<System::Collections::ArrayList, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Remoting::Channels::SinkProviderData::__set_properties(System::Collections::Hashtable value)  {
::cordl_internals::setInstanceField<System::Collections::Hashtable, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Hashtable>(value));
}
constexpr System::Collections::Hashtable System::Runtime::Remoting::Channels::SinkProviderData::__get_properties() const {
return ::cordl_internals::getInstanceField<System::Collections::Hashtable, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }]
 System::Runtime::Remoting::Channels::SinkProviderData::SinkProviderData(::StringW name)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<SinkProviderData>(name))) {}
 void System::Runtime::Remoting::Channels::SinkProviderData::_ctor(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Channels::SinkProviderData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, name);
}
 System::Collections::IList System::Runtime::Remoting::Channels::SinkProviderData::get_Children()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Channels::SinkProviderData>::get(),
                            "get_Children",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IList, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IDictionary System::Runtime::Remoting::Channels::SinkProviderData::get_Properties()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Channels::SinkProviderData>::get(),
                            "get_Properties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IDictionary, false>(const_cast<void*>(instance), ___internal_method);
}
