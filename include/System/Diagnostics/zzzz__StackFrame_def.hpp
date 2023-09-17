#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Reflection {
class MethodBase;
}
// Forward declare root types
namespace System::Diagnostics {
class StackFrame;
}
// Type: System.Diagnostics::StackFrame
namespace System::Diagnostics {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3724))
// CS Name: System.Diagnostics.StackFrame
class CORDL_TYPE StackFrame : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~StackFrame() = default;

// Ctor Parameters [CppParam { name: "", ty: "StackFrame", modifiers: " const&", def_value: None }]
constexpr StackFrame(StackFrame const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StackFrame", modifiers: "&&", def_value: None }]
constexpr StackFrame(StackFrame&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StackFrame(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr StackFrame& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StackFrame& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StackFrame& operator=(StackFrame&& o) noexcept = default;
  constexpr StackFrame& operator=(StackFrame const& o) noexcept = default;
                


// Fields

/// @brief Field OFFSET_UNKNOWN offset 0
static constexpr int32_t  OFFSET_UNKNOWN{-1};

 int32_t __declspec(property(get=__get_ilOffset, put=__set_ilOffset))  ilOffset;

constexpr void __set_ilOffset(int32_t value) ;

constexpr int32_t __get_ilOffset() const;

 int32_t __declspec(property(get=__get_nativeOffset, put=__set_nativeOffset))  nativeOffset;

constexpr void __set_nativeOffset(int32_t value) ;

constexpr int32_t __get_nativeOffset() const;

 int64_t __declspec(property(get=__get_methodAddress, put=__set_methodAddress))  methodAddress;

constexpr void __set_methodAddress(int64_t value) ;

constexpr int64_t __get_methodAddress() const;

 uint32_t __declspec(property(get=__get_methodIndex, put=__set_methodIndex))  methodIndex;

constexpr void __set_methodIndex(uint32_t value) ;

constexpr uint32_t __get_methodIndex() const;

 ::System::Reflection::MethodBase __declspec(property(get=__get_methodBase, put=__set_methodBase))  methodBase;

constexpr void __set_methodBase(::System::Reflection::MethodBase value) ;

constexpr ::System::Reflection::MethodBase __get_methodBase() const;

 ::StringW __declspec(property(get=__get_fileName, put=__set_fileName))  fileName;

constexpr void __set_fileName(::StringW value) ;

constexpr ::StringW __get_fileName() const;

 int32_t __declspec(property(get=__get_lineNumber, put=__set_lineNumber))  lineNumber;

constexpr void __set_lineNumber(int32_t value) ;

constexpr int32_t __get_lineNumber() const;

 int32_t __declspec(property(get=__get_columnNumber, put=__set_columnNumber))  columnNumber;

constexpr void __set_columnNumber(int32_t value) ;

constexpr int32_t __get_columnNumber() const;

 ::StringW __declspec(property(get=__get_internalMethodName, put=__set_internalMethodName))  internalMethodName;

constexpr void __set_internalMethodName(::StringW value) ;

constexpr ::StringW __get_internalMethodName() const;


// Methods

/// @brief Method get_frame_info addr 0x240c224 size 0x8 virtual false final false
static bool get_frame_info(int32_t skip, bool needFileInfo, ByRef<::System::Reflection::MethodBase> method, ByRef<int32_t> iloffset, ByRef<int32_t> native_offset, ByRef<::StringW> file, ByRef<int32_t> line, ByRef<int32_t> column) ;

// Ctor Parameters []
explicit StackFrame() ;

/// @brief Method .ctor addr 0x240c22c size 0x50 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "skipFrames", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "fNeedFileInfo", ty: "bool", modifiers: "", def_value: None }]
explicit StackFrame(int32_t skipFrames, bool fNeedFileInfo) ;

/// @brief Method .ctor addr 0x240c27c size 0x60 virtual false final false
 void _ctor(int32_t skipFrames, bool fNeedFileInfo) ;

/// @brief Method GetFileLineNumber addr 0x240c2dc size 0x8 virtual true final false
 int32_t GetFileLineNumber() ;

/// @brief Method GetFileName addr 0x240c2e4 size 0x8 virtual true final false
 ::StringW GetFileName() ;

/// @brief Method GetSecureFileName addr 0x240c2ec size 0xd4 virtual false final false
 ::StringW GetSecureFileName() ;

/// @brief Method GetILOffset addr 0x240c3c0 size 0x8 virtual true final false
 int32_t GetILOffset() ;

/// @brief Method GetMethod addr 0x240c3c8 size 0x8 virtual true final false
 ::System::Reflection::MethodBase GetMethod() ;

/// @brief Method GetNativeOffset addr 0x240c3d0 size 0x8 virtual true final false
 int32_t GetNativeOffset() ;

/// @brief Method GetMethodAddress addr 0x240c3d8 size 0x8 virtual false final false
 int64_t GetMethodAddress() ;

/// @brief Method GetMethodIndex addr 0x240c3e0 size 0x8 virtual false final false
 uint32_t GetMethodIndex() ;

/// @brief Method GetInternalMethodName addr 0x240c3e8 size 0x8 virtual false final false
 ::StringW GetInternalMethodName() ;

/// @brief Method ToString addr 0x240c3f0 size 0x23c virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Diagnostics
} // end anonymous namespace
NEED_NO_BOX(::System::Diagnostics::StackFrame);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::StackFrame, "System.Diagnostics", "StackFrame");
