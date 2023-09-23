#pragma once
#include "System/Xml/Schema/zzzz__InteriorNode_impl.hpp"
#include "System/Xml/Schema/zzzz__QmarkNode_def.hpp"
#include "System/Xml/Schema/zzzz__BitSet_def.hpp"
//  Writing Method size for method: System::Xml::Schema::QmarkNode.ConstructPos
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::QmarkNode::*)(System::Xml::Schema::BitSet, System::Xml::Schema::BitSet, ::ArrayW<System::Xml::Schema::BitSet>)>(&System::Xml::Schema::QmarkNode::ConstructPos)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x271b2b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::Schema::QmarkNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::QmarkNode>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Schema::QmarkNode.get_IsNullable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::QmarkNode::*)()>(&System::Xml::Schema::QmarkNode::get_IsNullable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x271b2d8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::Schema::QmarkNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::QmarkNode>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Schema::QmarkNode._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::QmarkNode::*)()>(&System::Xml::Schema::QmarkNode::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x271b2e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::QmarkNode>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void System::Xml::Schema::QmarkNode::ConstructPos(System::Xml::Schema::BitSet firstpos, System::Xml::Schema::BitSet lastpos, ::ArrayW<System::Xml::Schema::BitSet> followpos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::QmarkNode>::get(),
                            "ConstructPos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::BitSet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::BitSet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Xml::Schema::BitSet>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, firstpos, lastpos, followpos);
}
 bool System::Xml::Schema::QmarkNode::get_IsNullable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::QmarkNode>::get(),
                            "get_IsNullable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 System::Xml::Schema::QmarkNode::QmarkNode()  : System::Xml::Schema::InteriorNode(THROW_UNLESS(::il2cpp_utils::New<QmarkNode>())) {}
 void System::Xml::Schema::QmarkNode::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::QmarkNode>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
