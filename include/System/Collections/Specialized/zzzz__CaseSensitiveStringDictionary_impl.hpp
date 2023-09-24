#pragma once
#include "System/Collections/Specialized/zzzz__StringDictionary_impl.hpp"
#include "System/Collections/Specialized/zzzz__CaseSensitiveStringDictionary_def.hpp"
//  Writing Method size for method: System::Collections::Specialized::CaseSensitiveStringDictionary._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Specialized::CaseSensitiveStringDictionary::*)()>(&System::Collections::Specialized::CaseSensitiveStringDictionary::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x27ad3f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Specialized::CaseSensitiveStringDictionary>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Specialized::CaseSensitiveStringDictionary.Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Specialized::CaseSensitiveStringDictionary::*)(::StringW, ::StringW)>(&System::Collections::Specialized::CaseSensitiveStringDictionary::Add)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x27ad3f4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::Specialized::CaseSensitiveStringDictionary),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Specialized::CaseSensitiveStringDictionary>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
 System::Collections::Specialized::CaseSensitiveStringDictionary System::Collections::Specialized::CaseSensitiveStringDictionary::New_ctor()  {
System::Collections::Specialized::CaseSensitiveStringDictionary o{THROW_UNLESS(::il2cpp_utils::New<System::Collections::Specialized::CaseSensitiveStringDictionary>())};
return o;
}
 void System::Collections::Specialized::CaseSensitiveStringDictionary::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Specialized::CaseSensitiveStringDictionary>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Collections::Specialized::CaseSensitiveStringDictionary::Add(::StringW key, ::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Specialized::CaseSensitiveStringDictionary>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, key, value);
}
