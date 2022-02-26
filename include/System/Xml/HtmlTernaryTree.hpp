// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: System.Xml
namespace System::Xml {
  // Forward declaring type: HtmlTernaryTree
  class HtmlTernaryTree;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::HtmlTernaryTree);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::HtmlTernaryTree*, "System.Xml", "HtmlTernaryTree");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.HtmlTernaryTree
  // [TokenAttribute] Offset: FFFFFFFF
  class HtmlTernaryTree : public ::Il2CppObject {
    public:
    // Get static field: static System.Byte[] htmlElements
    static ::ArrayW<uint8_t> _get_htmlElements();
    // Set static field: static System.Byte[] htmlElements
    static void _set_htmlElements(::ArrayW<uint8_t> value);
    // Get static field: static System.Byte[] htmlAttributes
    static ::ArrayW<uint8_t> _get_htmlAttributes();
    // Set static field: static System.Byte[] htmlAttributes
    static void _set_htmlAttributes(::ArrayW<uint8_t> value);
    // static private System.Void .cctor()
    // Offset: 0x1BAB0B8
    static void _cctor();
  }; // System.Xml.HtmlTernaryTree
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::HtmlTernaryTree::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Xml::HtmlTernaryTree::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::HtmlTernaryTree*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
