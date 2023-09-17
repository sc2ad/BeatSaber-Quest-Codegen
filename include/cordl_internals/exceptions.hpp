#pragma once

#include "beatsaber-hook/shared/utils/il2cpp-utils-exceptions.hpp"

namespace cordl_internals {
    struct FieldException : public ::il2cpp_utils::exceptions::StackTraceException {
        using StackTraceException::StackTraceException;
    };

    struct NullException : public ::il2cpp_utils::exceptions::StackTraceException {
        using StackTraceException::StackTraceException;
    };
}
